<!-- 
Task
Given a base-10 integer, n. convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive l's in n's binary representation. When working with different bases, it is common to show the base as a subscript.

Example
n = 125|
The binary representation of 12510 is 11111012. In base 10. there are 5 and 1 consecutive ones in two groups. Print the maximum, 5.
 -->

<?php

function maxConsecutiveOnes($n) {
    $binary = decbin($n);
    
    $maxOnes = 0;
    $currentOnes = 0;
    
    for ($i = 0; $i < strlen($binary); $i++) {
        if ($binary[$i] == '1') {
            $currentOnes++;
        } else {
            $maxOnes = max($maxOnes, $currentOnes);
            $currentOnes = 0;
        }
    }
    
    $maxOnes = max($maxOnes, $currentOnes);
    
    return $maxOnes;
}

$n = intval(trim(fgets(STDIN)));

$maxConsecutive = maxConsecutiveOnes($n);
echo $maxConsecutive . "\n";

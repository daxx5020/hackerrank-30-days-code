<!-- 
Task
Given an integer, n. perform the following conditional actions:
• If n is odd, print Weird
• If n is even and in the inclusive range of 2 to 5. print Not Weird
• If n is even and in the inclusive range of 6 to 20. print Weird
• If n is even and greater than 20. print Not Weird
Complete the stub code provided in your editor to print whether or not n is weird.
 -->


<?php

$N = intval(trim(fgets(STDIN)));
if ($N % 2 !== 0) {
    echo "Weird\n";
} elseif ($N % 2 === 0 && $N >= 2 && $N <= 5) {
    echo "Not Weird\n";
} elseif ($N % 2 === 0 && $N >= 6 && $N <= 20) {
    echo "Weird\n";
} elseif ($N % 2 === 0 && $N > 20) {
    echo "Not Weird\n";
}

?>

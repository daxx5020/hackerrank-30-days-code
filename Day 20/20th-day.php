<!-- 
Task
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:

1. Array is sorted in numSwaps swaps.
where numSwaps is the number of swaps that took place.

2. First Element: firstElement
where first Element is the first element in the sorted array.

3. Last Element: lastElement
where last Element is the last element in the sorted array.

Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.
 -->


 <?php

$n = intval(trim(fgets(STDIN)));

$a_temp = rtrim(fgets(STDIN));

$a = array_map('intval', preg_split('/ /', $a_temp, -1, PREG_SPLIT_NO_EMPTY));

$swapCount = 0;
for ($i = 0; $i < $n; $i++) {
    for ($j = 0; $j < $n - 1; $j++) {
        if ($a[$j] > $a[$j + 1]) {
            $temp = $a[$j];
            $a[$j] = $a[$j + 1];
            $a[$j + 1] = $temp;
            $swapCount++;
        }
    }
    if ($swapCount == 0) {
        break;
    }
}

echo "Array is sorted in $swapCount swaps.\n";
echo "First Element: {$a[0]}\n";
echo "Last Element: {$a[$n - 1]}\n";

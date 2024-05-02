<!-- 
Objective
Today, we are building on our knowledge of arrays by adding another dimension.

Context
Given a 6 × 6 2D Array, A:

111000
010000
111000
000000
000000
000000

We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:

a b c
  d
e f g

There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.

Task
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

Example
In the array shown above, the maximum hourglass sum is 7 for the hourglass in the top left corner.

Input Format
There are 6 lines of input, where each line contains 6 space-separated integers that describe the 2D array A
 -->

 <?php

$arr = array();

for ($i = 0; $i < 6; $i++) {
    $arr_temp = rtrim(fgets(STDIN));

    $arr[] = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY));
}

$rows = count($arr);
$cols = count($arr[0]);

$maxSum = PHP_INT_MIN;

for ($i = 0; $i < $rows - 2; $i++) {
    for ($j = 0; $j < $cols - 2; $j++) {
        $sum =
            $arr[$i][$j] + $arr[$i][$j + 1] + $arr[$i][$j + 2] +
            $arr[$i + 1][$j + 1] +
            $arr[$i + 2][$j] + $arr[$i + 2][$j + 1] + $arr[$i + 2][$j + 2];

        if ($sum > $maxSum) {
            $maxSum = $sum;
        }
    }
}

echo $maxSum . "\n";


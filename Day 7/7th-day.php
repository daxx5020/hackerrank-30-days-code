<!-- 
Task
Given an array. A. of IN integers, print A's elements in reverse order as a single line of space-separated numbers.

Example
A = [1, 2, 3, 4)]
Print 4 3 2 1. Each integer is separated by one space.
 -->

<?php

$n = intval(trim(fgets(STDIN)));

$arr_temp = rtrim(fgets(STDIN));

$arr = array_map('intval', preg_split('/ /', $arr_temp, -1, PREG_SPLIT_NO_EMPTY));

for ($i = count($arr) - 1; $i >= 0; $i--) {
    echo $arr[$i] . " ";
}

?>

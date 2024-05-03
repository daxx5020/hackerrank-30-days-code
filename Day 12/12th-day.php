<!-- 
Objective
Today, we're delving into Inheritance. 

Task
You are given two classes. Person and Student. where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

• A Student class constructor, which has 4 parameters:
1. A string. firstName.
2. A string, last Name.
3. An integer. id Number.
4. An integer array (or vector) of test scores. scores.

• A char calculate) method that calculates a Student object's average and returns the grade character representative of their calculated average:
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


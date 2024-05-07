<!-- 
Task
Read a string. S. and print its integer value; if S cannot be converted to an integer, print Bad String.

Note: You must use the String-to-Integer and exception handling constructs built into your

submission language. If you attempt to use loops/conditional statements, you will get a 0 score.

Input Format
A single string. S.
 -->


<?php
try {
    $result = filter_var($S, FILTER_VALIDATE_INT) !== false ? filter_var($S, FILTER_VALIDATE_INT) : "Bad String";
echo $result;
} catch (Exception $e) {
    echo "Bad String" . PHP_EOL;
}
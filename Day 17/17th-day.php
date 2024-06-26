<!-- 
Task
Write a Calculator class with a single method: int power(int.int). The power method takes two integers, n and p. as parameters and returns the integer result of n?. If either n or p is negative, then the method must throw an exception with the message: n and p should be non-negative.

Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.
 -->


<?php

class Calculator {
    function power($n, $p) {
        if ($n >= 0 && $p >= 0) {
            return pow($n, $p);
        } else {
            throw new Exception("n and p should be non-negative");
        }
    }
}
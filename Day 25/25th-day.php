<!-- 
Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
 -->


<?php
function isPrime($n) {
    if ($n <= 1) {
        return false;
    }
    if ($n <= 3) {
        return true;
    }

    if ($n % 2 == 0 || $n % 3 == 0) {
        return false;
    }

    for ($index = 5; $index * $index <= $n; $index = $index + 6) {
        if ($n % $index == 0 || $n % ($index + 2) == 0) {
            return false;
        }
    }
    return true;
}

function processData($input) {
    $arr = explode("\n", $input);

    for ($i = 1; $i < count($arr); $i++) {
        $n = intval($arr[$i]);
        if (isPrime($n)) {
            echo "Prime\n";
        } else {
            echo "Not prime\n";
        }
    }
}

$input = "";
while ($line = fgets(STDIN)) {
    $input .= $line;
}

processData($input);
?>

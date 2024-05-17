<!-- 
Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
 -->


 <?php
$_fp = fopen("php://stdin", "r");

$line1 = fgets($_fp);
list($d1, $m1, $y1) = array_map('intval', explode(' ', trim($line1)));

$line2 = fgets($_fp);
list($d2, $m2, $y2) = array_map('intval', explode(' ', trim($line2)));

fclose($_fp);

function calculateFine($d1, $m1, $y1, $d2, $m2, $y2) {
    if ($y1 > $y2) {
        return 10000;
    } elseif ($y1 == $y2) {
        if ($m1 > $m2) {
            return 500 * ($m1 - $m2);
        } elseif ($m1 == $m2 && $d1 > $d2) {
            return 15 * ($d1 - $d2);
        }
    }
    return 0;
}

$fine = calculateFine($d1, $m1, $y1, $d2, $m2, $y2);

echo $fine . "\n";
?>

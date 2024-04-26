<!-- 
Task
i = result.
Given an integer, n. print its first 10 multiples. Each multiple n x i (where 1 ≤ i ≤ 10) should be printed on a new line in the form: n x i = result
 -->


 <?php
$n = intval(trim(fgets(STDIN)));

printMultiplicationTable($n);

function printMultiplicationTable($n) {
    for ($i = 1; $i <= 10; $i++) {
        $result = $n * $i;
        echo "$n x $i = $result\n";
    }
}
?>

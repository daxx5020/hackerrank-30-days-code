<!-- Task
Complete the code in the editor below. The variables i,d ,s and s are already declared and initialized for you. You must:

    Declare 3 variables: one of type int, one of type double, and one of type String.
    Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.
    Use the + operator to perform the following operations:
        Print the sum of i plus your int variable on a new line.
        Print the sum of d plus your double variable to a scale of one decimal place on a new line.
        Concatenate s with the string you read as input and print the result on a new line. -->


        <?php
// Declare variables
$a = 0;
$b = 0.0;
$c = "";

// Read input
$a = intval(fgets(STDIN));
$b = floatval(fgets(STDIN));
$c = rtrim(fgets(STDIN));

// Perform operations
$sum_int = $a + $i;
$sum_double = $b + $d;
$concat_string = $s . $c;

// Print output
echo $sum_int . "\n";
echo number_format($sum_double, 1) . "\n";
echo $concat_string;
?>

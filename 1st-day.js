/*Task
Complete the code in the editor below. The variables i,d ,s and s are already declared and initialized for you. You must:

    Declare 3 variables: one of type int, one of type double, and one of type String.
    Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.
    Use the + operator to perform the following operations:
        Print the sum of i plus your int variable on a new line.
        Print the sum of d plus your double variable to a scale of one decimal place on a new line.
        Concatenate s with the string you read as input and print the result on a new line.
*/


// Declare second integer, double, and String variables.
// Declare variables
let a = 0;
let b = 0.0;
let c = "";

// Read input
a = parseInt(readLine());
b = parseFloat(readLine());
c = readLine();

// Perform operations
let sumInt = a + i;
let sumDouble = b + d;
let concatString = s + c;

// Print output
console.log(sumInt);
console.log(sumDouble.toFixed(1));
console.log(concatString);
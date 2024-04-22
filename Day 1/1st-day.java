/*Task
Complete the code in the editor below. The variables i,d ,s and s are already declared and initialized for you. You must:

    Declare 3 variables: one of type int, one of type double, and one of type String.
    Read  lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your 3 variables.
    Use the + operator to perform the following operations:
        Print the sum of i plus your int variable on a new line.
        Print the sum of d plus your double variable to a scale of one decimal place on a new line.
        Concatenate s with the string you read as input and print the result on a new line.
*/


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // Declare variables
        int a = 0;
        double b = 0.0;
        String c = "";

        // Read input
        Scanner scanner = new Scanner(System.in);
        a = Integer.parseInt(scanner.nextLine());
        b = Double.parseDouble(scanner.nextLine());
        c = scanner.nextLine();

        // Perform operations
        int sumInt = a + i;
        double sumDouble = b + d;
        String concatString = s + c;

        // Print output
        System.out.println(sumInt);
        System.out.println(String.format("%.1f", sumDouble));
        System.out.println(concatString);
    }
}

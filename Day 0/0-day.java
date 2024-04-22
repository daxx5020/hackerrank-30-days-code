/*Objective
In this challenge, we review some basic concepts that will get you started with this series. You will need to use the same (or similar) syntax to read input and write output in challenges throughout HackerRank. Check out the Tutorial tab for learning materials and an instructional video!

Task
To complete this challenge, you must save a line of input from stdin to a variable, print Hello, World. on a single line, and finally print the value of your variable on a second line.

You've got this!

Note: The instructions are Java-based, but we support submissions in many popular languages. You can switch languages using the drop-down menu above your editor, and the  variable may be written differently depending on the best-practice conventions of your submission language.

Input Format
A single line of text denoting  (the variable whose contents must be printed).

Output Format
Print Hello, World. on the first line, and the contents of  on the second line
*/



import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String inputString = scanner.nextLine();
        
        System.out.println("Hello, World.");
        System.out.println(inputString);
    }
}


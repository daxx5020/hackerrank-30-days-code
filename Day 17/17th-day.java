/*
Task
Write a Calculator class with a single method: int power(int.int). The power method takes two integers, n and p. as parameters and returns the integer result of n?. If either n or p is negative, then the method must throw an exception with the message: n and p should be non-negative.

Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.
*/


import java.util.Scanner;

class Calculator {
    int power(int n, int p) throws Exception {
        if (n >= 0 && p >= 0) {
            return (int) Math.pow(n, p);
        } else {
            throw new Exception("n and p should be non-negative");
        }
    }
}

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Calculator myCalculator = new Calculator();
        int T = scanner.nextInt();
        scanner.nextLine(); // consume the newline character after nextInt()

        while (T-- > 0) {
            String[] num = scanner.nextLine().split(" ");
            try {
                int n = Integer.parseInt(num[0]);
                int p = Integer.parseInt(num[1]);
                int ans = myCalculator.power(n, p);
                System.out.println(ans);
            } catch (Exception e) {
                System.out.println(e.getMessage());
            }
        }
        scanner.close();
    }
}




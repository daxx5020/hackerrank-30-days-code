/*
Task
The AdvancedAr ithmetic interface and the method declaration for the abstract divisor Sum(n) method are provided for you in the editor below.

Complete the implementation of Calculator class, which implements the AdvancedAr ithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of n.
*/


import java.io.*;
import java.util.*;

interface AdvancedArithmetic {
    int divisorSum(int n);
}

class Calculator implements AdvancedArithmetic {
    public int divisorSum(int n) {
        int total = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                total += i;
            }
        }
        return total;
    }
}

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        Calculator myCalculator = new Calculator();
        if (myCalculator instanceof AdvancedArithmetic) {
            int sum = myCalculator.divisorSum(n);
            System.out.println("I implemented: AdvancedArithmetic\n" + sum);
        } else {
            System.out.println("Wrong answer");
        }
        scanner.close();
    }
}

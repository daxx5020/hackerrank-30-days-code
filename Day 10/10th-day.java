/*
Task
Given a base-10 integer, n. convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive l's in n's binary representation. When working with different bases, it is common to show the base as a subscript.

Example
n = 125|
The binary representation of 12510 is 11111012. In base 10. there are 5 and 1 consecutive ones in two groups. Print the maximum, 5.
*/


import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

public class Solution {

    static int maxConsecutiveOnes(int n) {
        // Convert decimal number to binary
        String binary = Integer.toBinaryString(n);
        
        int maxOnes = 0;
        int currentOnes = 0;
        
         for (char c : binary.toCharArray()) {
            if (c == '1') {
                currentOnes++;
            } else {
                maxOnes = Math.max(maxOnes, currentOnes);
                currentOnes = 0;
            }
        }
        
        maxOnes = Math.max(maxOnes, currentOnes);
        
        return maxOnes;
    }

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        int maxConsecutive = maxConsecutiveOnes(n);
        System.out.println(maxConsecutive);

        bufferedReader.close();
    }
}

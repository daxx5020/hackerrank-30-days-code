/*
Task
i = result.
Given an integer, n. print its first 10 multiples. Each multiple n x i (where 1 ≤ i ≤ 10) should be printed on a new line in the form: n x i = result
*/


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String nTemp = bufferedReader.readLine().trim();

        int n = Integer.parseInt(nTemp);

        printMultiplicationTable(n);

        bufferedReader.close();
    }

    public static void printMultiplicationTable(int n) {
        for (int i = 1; i <= 10; i++) {
            int result = n * i;
            System.out.println(n + " x " + i + " = " + result);
        }
    }
}
/*
Objective
Today, we are building on our knowledge of arrays by adding another dimension.

Context
Given a 6 × 6 2D Array, A:

111000
010000
111000
000000
000000
000000

We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:

a b c
  d
e f g

There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.

Task
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

Example
In the array shown above, the maximum hourglass sum is 7 for the hourglass in the top left corner.

Input Format
There are 6 lines of input, where each line contains 6 space-separated integers that describe the 2D array A
*/


import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        List<List<Integer>> arr = new ArrayList<>();

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

            List<Integer> arrRow = new ArrayList<>();

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arrRow.add(arrItem);
            }

            arr.add(arrRow);
        }

        bufferedReader.close();

        int rows = arr.size();
        int cols = arr.get(0).size();

        int maxSum = Integer.MIN_VALUE;

        for (int i = 0; i < rows - 2; i++) {
            for (int j = 0; j < cols - 2; j++) {
                int sum =
                    arr.get(i).get(j) + arr.get(i).get(j + 1) + arr.get(i).get(j + 2) +
                    arr.get(i + 1).get(j + 1) +
                    arr.get(i + 2).get(j) + arr.get(i + 2).get(j + 1) + arr.get(i + 2).get(j + 2);

                if (sum > maxSum) {
                    maxSum = sum;
                }
            }
        }

        System.out.println(maxSum);
    }
}


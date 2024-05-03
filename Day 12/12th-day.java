/*
Objective
Today, we're delving into Inheritance. 

Task
You are given two classes. Person and Student. where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

• A Student class constructor, which has 4 parameters:
1. A string. firstName.
2. A string, last Name.
3. An integer. id Number.
4. An integer array (or vector) of test scores. scores.

• A char calculate) method that calculates a Student object's average and returns the grade character representative of their calculated average:
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


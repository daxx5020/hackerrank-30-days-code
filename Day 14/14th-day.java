/*
The absolute difference between two integers, a and b, is written as a - b. The maximum absolute difference between two integers in a set of positive integers, elements, is the largest absolute difference between any two integers in elements.

The Difference class is started for you in the editor. It has a private integer array (elements) for storing N non-negative integers, and a public integer (marimum Difference) for storing the maximum absolute difference.

Task
Complete the Difference class by writing the following:
• A class constructor that takes an array of integers as a parameter and saves it to the elements instance variable.
• A computeDifference method that finds the maximum absolute difference between any 2 numbers in elements
and stores it in the maximum.Difference instance variable.

Input Format
You are not responsible for reading any input from stdin. The locked Solution class in the editor reads in 2 lines of input. The first line contains N. the size of the elements array. The second line has N space-separated integers that describe the _elements array.
*/


import java.util.*;

class Difference {
    private int[] elements;
    public int maximumDifference;

    public Difference(int[] elements) {
        this.elements = elements;
    }

    public void computeDifference() {
        int maxDifference = Integer.MIN_VALUE;
        int length = elements.length;

        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                int difference = Math.abs(elements[i] - elements[j]);

                if (difference > maxDifference) {
                    maxDifference = difference;
                }
            }
        }
        maximumDifference = maxDifference;
    }
}

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] arr = new int[N];

        for (int i = 0; i < N; i++) {
            arr[i] = scanner.nextInt();
        }

        Difference d = new Difference(arr);
        d.computeDifference();
        System.out.println(d.maximumDifference);

        scanner.close();
    }
}


/*
Task
Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:

1. Array is sorted in numSwaps swaps.
where numSwaps is the number of swaps that took place.

2. First Element: firstElement
where first Element is the first element in the sorted array.

3. Last Element: lastElement
where last Element is the last element in the sorted array.

Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.
*/


import java.io.*;
import java.util.*;
import java.util.stream.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> a = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(Collectors.toList());

        int swapCount = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (a.get(j) > a.get(j + 1)) {
                    Collections.swap(a, j, j + 1);
                    swapCount++;
                }
            }
            if (swapCount == 0) {
                break;
            }
        }

        System.out.println("Array is sorted in " + swapCount + " swaps.");
        System.out.println("First Element: " + a.get(0));
        System.out.println("Last Element: " + a.get(n - 1));

        bufferedReader.close();
    }
}


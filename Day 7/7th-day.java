/*
Task
Given an array. A. of IN integers, print A's elements in reverse order as a single line of space-separated numbers.

Example
A = [1, 2, 3, 4)]
Print 4 3 2 1. Each integer is separated by one space.
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
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(bufferedReader.readLine().trim());

        List<Integer> arr = Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
            .map(Integer::parseInt)
            .collect(toList());

        // JavaScript code converted to Java and integrated below
        for (int i = arr.size() - 1; i >= 0; i--) {
            System.out.print(arr.get(i) + " ");
        }

        bufferedReader.close();
    }
}


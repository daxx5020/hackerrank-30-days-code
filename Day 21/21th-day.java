/*
Task
Write a single generic function named printArray; this function must take an array of generic elements as a parameter (the exception to this is C++, which takes a vector). The locked Solution class in your editor tests your function.

Note: You must use generics to solve this challenge. Do not write overloaded functions.
*/


import java.util.Scanner;
import java.util.ArrayList;

public class Solution {
    public static <T> void printArray(ArrayList<T> arr) {
        for (T elem : arr) {
            System.out.println(elem);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int intCount = scanner.nextInt();
        ArrayList<Integer> intArr = new ArrayList<>();
        for (int i = 0; i < intCount; ++i) {
            intArr.add(scanner.nextInt());
        }

        int stringCount = scanner.nextInt();
        ArrayList<String> stringArr = new ArrayList<>();
        for (int i = 0; i < stringCount; ++i) {
            stringArr.add(scanner.next());
        }

        System.out.println("Int Array:");
        printArray(intArr);

        System.out.println("String Array:");
        printArray(stringArr);
        
        scanner.close();
    }
}



/*
Task
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will
then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from
your phone book on a new line in the form name=phoneNumber: if an entry for name is not found, print Not found instead.
Note: Your phone book should be a Dictionary/Map/HashMap data structure.
*/


import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character after reading integer input

        Map<String, String> phoneBook = new HashMap<>();

        // Populate the phone book
        for (int i = 0; i < n; i++) {
            String line = scanner.nextLine();
            String[] parts = line.split(" ");
            String name = parts[0];
            String phoneNumber = parts[1];
            phoneBook.put(name, phoneNumber);
        }

        // Query the phone book
        while (scanner.hasNextLine()) {
            String query = scanner.nextLine().trim();
            if (phoneBook.containsKey(query)) {
                System.out.println(query + "=" + phoneBook.get(query));
            } else {
                System.out.println("Not found");
            }
        }

        scanner.close();
    }
}



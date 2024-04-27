/*
Task
Given a string, S. of length N that is indexed from 0 to N - 1, print its even-indexed and odd-indexed characters as 2 space-
separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.
*/


import java.io.*;
import java.util.*;

public class Solution {

    public static void processData(String input) {
        ArrayList<String> inputs = new ArrayList<>();
        Scanner scanner = new Scanner(input);
        while (scanner.hasNextLine()) {
            inputs.add(scanner.nextLine());
        }
        
        for (String line : inputs) {
            StringBuilder evenLetters = new StringBuilder();
            StringBuilder oddLetters = new StringBuilder();
            
            for (int i = 0; i < line.length(); i++) {
                if (i % 2 == 0) {
                    evenLetters.append(line.charAt(i));
                } else {
                    oddLetters.append(line.charAt(i));
                }
            }
            
            System.out.println(evenLetters.toString() + " " + oddLetters.toString());
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder input = new StringBuilder();
        br.readLine(); // discard the first line
        String line;
        while ((line = br.readLine()) != null) {
            input.append(line).append("\n");
        }

        processData(input.toString());
    }
}

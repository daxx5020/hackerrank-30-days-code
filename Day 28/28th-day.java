/*
Task
Consider a database table. Emails, which has the attributes Firs  Name and Email ID. Given I rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.

Input Format
The first line contains an integer. N. total number of rows in the table.
Each of the N subsequent lines contains 2 space-separated strings denoting a person's first name and email ID, respectively.
*/


import java.io.*;
import java.util.*;
import java.util.stream.*;

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        
        int N = Integer.parseInt(bufferedReader.readLine().trim());
        List<String> namesArray = new ArrayList<>();

        for (int i = 0; i < N; i++) {
            try {
                String[] firstMultipleInput = bufferedReader.readLine().trim().split(" ");
                
                String firstName = firstMultipleInput[0];
                String emailID = firstMultipleInput[1];
                
                if (emailID.endsWith("@gmail.com")) {
                    namesArray.add(firstName);
                }
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        }

        bufferedReader.close();
        
        Collections.sort(namesArray);
        
        namesArray.forEach(System.out::println);
    }
}


/*
Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
*/


import java.io.*;
import java.util.*;

public class Solution {

    public static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        if (n <= 3) {
            return true;
        }

        if (n % 2 == 0 || n % 3 == 0) {
            return false;
        }

        for (int index = 5; index * index <= n; index = index + 6) {
            if (n % index == 0 || n % (index + 2) == 0) {
                return false;
            }
        }
        return true;
    }

    public static void processData(String input) {
        List<String> arr = new ArrayList<>();
        Scanner scanner = new Scanner(input);
        while (scanner.hasNextLine()) {
            String line = scanner.nextLine();
            arr.add(line);
        }

        for (int i = 1; i < arr.size(); i++) {
            int n = Integer.parseInt(arr.get(i));
            if (isPrime(n)) {
                System.out.println("Prime");
            } else {
                System.out.println("Not prime");
            }
        }
    }

    public static void main(String[] args) {
        StringBuilder inputBuilder = new StringBuilder();
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            String line;
            while ((line = br.readLine()) != null) {
                inputBuilder.append(line).append("\n");
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        processData(inputBuilder.toString());
    }
}

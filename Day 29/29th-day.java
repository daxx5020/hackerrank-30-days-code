/*
Task
Given set S = {1, 2,3, ..., N}. Find two integers, A and B (where A < B), from set S such that the value of A&:B is the maximum possible and also less than a given integer, K. In this case, & represents the bitwise AND operator.

Function Description
Complete the bitwiseAnd function in the editor below. bitwiseAnd has the following paramter(s):
- int N: the maximum integer to consider
- int K: the limit of the result, inclusive

Returns
- int: the maximum value of A&: B within the limit.
*/


import java.io.*;
import java.util.stream.*;

class Result {

    public static int bitwiseAnd(int N, int K) {
        int finalVal = 0;

        for(int i = 0; i < N; i++){
            for(int j = i + 1; j <= N; j++){
                int value = i & j;

                if(value < K && value > finalVal){
                    finalVal = value;
                }
            }
        }
        return finalVal;
    }
}

public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int t = Integer.parseInt(bufferedReader.readLine().trim());

        IntStream.range(0, t).forEach(tItr -> {
            try {
                String[] firstMultipleInput = bufferedReader.readLine().replaceAll("\\s+$", "").split(" ");

                int count = Integer.parseInt(firstMultipleInput[0]);

                int lim = Integer.parseInt(firstMultipleInput[1]);

                int res = Result.bitwiseAnd(count, lim);

                try {
                    bufferedWriter.write(String.valueOf(res));
                    bufferedWriter.newLine();
                } catch (IOException ex) {
                    throw new RuntimeException(ex);
                }
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });

        bufferedReader.close();
        bufferedWriter.close();
    }
}



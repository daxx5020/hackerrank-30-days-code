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


#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int bitwiseAnd(int N, int K) {
    int final = 0;

    for(int i = 0; i < N; i++){
        for(int j = i + 1; j <= N; j++){
            int value = i & j;

            if(value < K && value > final){
                final = value;
            }
        }
    }
    return final;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(t_temp);

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input;

        size_t start = 0, end = 0;
        while ((end = first_multiple_input_temp.find(' ', start)) != string::npos) {
            first_multiple_input.push_back(first_multiple_input_temp.substr(start, end - start));
            start = end + 1;
        }
        first_multiple_input.push_back(first_multiple_input_temp.substr(start));

        int count = stoi(first_multiple_input[0]);

        int lim = stoi(first_multiple_input[1]);

        int res = bitwiseAnd(count, lim);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
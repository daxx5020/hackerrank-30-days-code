/*
Objective
Today, we are building on our knowledge of arrays by adding another dimension.

Context
Given a 6 × 6 2D Array, A:

111000
010000
111000
000000
000000
000000

We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:

a b c
  d
e f g

There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.

Task
Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

Example
In the array shown above, the maximum hourglass sum is 7 for the hourglass in the top left corner.

Input Format
There are 6 lines of input, where each line contains 6 space-separated integers that describe the 2D array A
*/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<vector<int>> arr(6);

    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        string arr_row_temp_temp;
        getline(cin, arr_row_temp_temp);

        size_t start = 0, end = 0;
        for (int j = 0; j < 6; j++) {
            end = arr_row_temp_temp.find(" ", start);
            arr[i][j] = stoi(arr_row_temp_temp.substr(start, end - start));
            start = end + 1;
        }
    }

    int rows = arr.size();
    int cols = arr[0].size();

    int maxSum = numeric_limits<int>::min();

    for (int i = 0; i < rows - 2; i++) {
        for (int j = 0; j < cols - 2; j++) {
            int sum = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
                      arr[i + 1][j + 1] +
                      arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2];

            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum << endl;

    return 0;
}



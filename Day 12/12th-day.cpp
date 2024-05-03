/*
Objective
Today, we're delving into Inheritance. 

Task
You are given two classes. Person and Student. where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

• A Student class constructor, which has 4 parameters:
1. A string. firstName.
2. A string, last Name.
3. An integer. id Number.
4. An integer array (or vector) of test scores. scores.

• A char calculate) method that calculates a Student object's average and returns the grade character representative of their calculated average:
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



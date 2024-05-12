/*
Task
Write a single generic function named printArray; this function must take an array of generic elements as a parameter (the exception to this is C++, which takes a vector). The locked Solution class in your editor tests your function.

Note: You must use generics to solve this challenge. Do not write overloaded functions.
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


template <typename T>
void printArray(const vector<T> &arr) {
    for (const auto &elem : arr) {
        cout << elem << endl;
    }
}

int main() {
    int intCount;
    cin >> intCount;
    vector<int> intArr(intCount);
    for (int i = 0; i < intCount; ++i) {
        cin >> intArr[i];
    }

    int stringCount;
    cin >> stringCount;
    vector<string> stringArr(stringCount);
    for (int i = 0; i < stringCount; ++i) {
        cin >> stringArr[i];
    }

    printArray(intArr);
    printArray(stringArr);

    return 0;
}

/*
This problem is about unit testing. Your company needs a function that meets the following requirements:

• For a given array of n integers, the function returns the index of the element with the minimum value in the array. If there is more than one element with the minimum value, it returns the smallest one.
• If an empty array is passed to the function, it raises an exception. A colleague has written this method. The implementation in Python is listed below. Implementations in other languages can be found in the code template.

A coworker has prepared functions that will perform the tests and validate return values. Finish the implementation of 3 classes to provide data and expected results for the tests. Complete the following methods.
*/


#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

int minimum_index(const vector<int>& seq) {
    if (seq.empty()) {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (size_t i = 1; i < seq.size(); ++i) {
        if (seq[i] < seq[min_idx]) {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray {
public:
    static vector<int> get_array() {
        return vector<int>();
    }
};

class TestDataUniqueValues {
public:
    static vector<int> get_array() {
        return {5, 8, 2, 4};
    }

    static int get_expected_result() {
        return 2;
    }
};

class TestDataExactlyTwoDifferentMinimums {
public:
    static vector<int> get_array() {
        return {5, 3, 9, 1, 1, 5, 6, 7};
    }

    static int get_expected_result() {
        return 3;
    }
};

void TestWithEmptyArray() {
    try {
        vector<int> seq = TestDataEmptyArray::get_array();
        int result = minimum_index(seq);
    } catch (const invalid_argument& e) {
        return;
    }
    throw runtime_error("Exception wasn't thrown as expected");
}

void TestWithUniqueValues() {
    vector<int> seq = TestDataUniqueValues::get_array();
    if (seq.size() < 2) {
        throw runtime_error("less than 2 elements in the array");
    }

    unordered_set<int> uniqueSet(seq.begin(), seq.end());
    if (uniqueSet.size() != seq.size()) {
        throw runtime_error("not all values are unique");
    }

    int expected_result = TestDataUniqueValues::get_expected_result();
    int result = minimum_index(seq);
    if (result != expected_result) {
        throw runtime_error("result is different than the expected result");
    }
}

void TestWithExactlyTwoDifferentMinimums() {
    vector<int> seq = TestDataExactlyTwoDifferentMinimums::get_array();
    if (seq.size() < 2) {
        throw runtime_error("less than 2 elements in the array");
    }

    vector<int> tmp = seq;
    sort(tmp.begin(), tmp.end());
    if (!(tmp[0] == tmp[1] && (tmp.size() == 2 || tmp[1] < tmp[2]))) {
        throw runtime_error("there are not exactly two minimums in the array");
    }

    int expected_result = TestDataExactlyTwoDifferentMinimums::get_expected_result();
    int result = minimum_index(seq);
    if (result != expected_result) {
        throw runtime_error("result is different than the expected result");
    }
}

int main() {
    try {
        TestWithEmptyArray();
        TestWithUniqueValues();
        TestWithExactlyTwoDifferentMinimums();
        cout << "OK" << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }
    return 0;
}



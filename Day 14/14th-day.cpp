/*
The absolute difference between two integers, a and b, is written as a - b. The maximum absolute difference between two integers in a set of positive integers, elements, is the largest absolute difference between any two integers in elements.

The Difference class is started for you in the editor. It has a private integer array (elements) for storing N non-negative integers, and a public integer (marimum Difference) for storing the maximum absolute difference.

Task
Complete the Difference class by writing the following:
• A class constructor that takes an array of integers as a parameter and saves it to the elements instance variable.
• A computeDifference method that finds the maximum absolute difference between any 2 numbers in elements
and stores it in the maximum.Difference instance variable.

Input Format
You are not responsible for reading any input from stdin. The locked Solution class in the editor reads in 2 lines of input. The first line contains N. the size of the elements array. The second line has N space-separated integers that describe the _elements array.
*/


#include <iostream>
#include <vector>
#include <cmath>
#include <climits>

class Difference {
private:
    std::vector<int> elements;
    int maximumDifference;

public:
    Difference(std::vector<int> &elements) : elements(elements), maximumDifference(INT_MIN) {}

    void computeDifference() {
        int length = elements.size();

        for (int i = 0; i < length; i++) {
            for (int j = i + 1; j < length; j++) {
                int difference = std::abs(elements[i] - elements[j]);

                if (difference > maximumDifference) {
                    maximumDifference = difference;
                }
            }
        }
    }

    int getMaximumDifference() const {
        return maximumDifference;
    }
};

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }

    Difference d(arr);
    d.computeDifference();
    std::cout << d.getMaximumDifference() << std::endl;

    return 0;
}

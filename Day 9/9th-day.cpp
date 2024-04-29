/*
Objective
instructional video.
Today, we are learning about an algorithmic concept called recursion.

Recursive Method for Calculating Factorial

Function Description
Complete the factorial function in the editor below. Be sure to use recursion.
factorial has the following paramter:
• int n: an integer

Returns
• int: the factorial of n
Note: If you fail to use recursion or fail to name your recursive function factorial or Factorial, you will get a score of 0.
*/

#include <iostream>
using namespace std;

int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    // Read input from STDIN
    int n;
    cin >> n;

    // Calculate factorial
    int result = factorial(n);

    // Print output to STDOUT
    cout << result << endl;

    return 0;
}

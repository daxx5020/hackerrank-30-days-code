/*
Task
Write a Calculator class with a single method: int power(int.int). The power method takes two integers, n and p. as parameters and returns the integer result of n?. If either n or p is negative, then the method must throw an exception with the message: n and p should be non-negative.

Note: Do not use an access modifier (e.g.: public) in the declaration for your Calculator class.
*/


#include <iostream>
#include <cmath>
using namespace std;

class Calculator {
public:
    int power(int n, int p) {
        if (n >= 0 && p >= 0) {
            return pow(n, p);
        }
        throw "n and p should be non-negative";
    }
};

int main() {
    int t;
    cin >> t;

    Calculator myCalculator;
    while (t--) {
        int n, p;
        cin >> n >> p;

        try {
            int ans = myCalculator.power(n, p);
            cout << ans << endl;
        } catch (const char* msg) {
            cout << msg << endl;
        }
    }

    return 0;
}



/*
Task
The AdvancedAr ithmetic interface and the method declaration for the abstract divisor Sum(n) method are provided for you in the editor below.

Complete the implementation of Calculator class, which implements the AdvancedAr ithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of n.
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class AdvancedArithmetic {
public:
    virtual int divisorSum(int n) = 0;
};

class Calculator : public AdvancedArithmetic {
public:
    int divisorSum(int n) override {
        int total = 0;
        for(int i = 1; i <= n; i++) {
            if (n % i == 0) {
                total += i;
            }
        }
        return total;
    }
};

int main() {
    int n;
    cin >> n;
    Calculator myCalculator;
    if (dynamic_cast<AdvancedArithmetic*>(&myCalculator)) {
        int sum = myCalculator.divisorSum(n);
        cout << "I implemented: AdvancedArithmetic\n" << sum;
    } else {
        cout << "Wrong answer";
    }
    return 0;
}




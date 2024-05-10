/*
Task
A palindrome is a word, phrase, number, or other sequence of characters which reads the same backwards and forwards. Can you determine if a given string, s, is a palindrome? To solve this challenge, we must first take each character in s, enqueue it in a queue, and also push that same character onto a stack. Once that's done, we must dequeue the first character from the queue and pop the top character off the stack, then compare the two characters to see if they are the same: as long as the characters match, we continue dequeueing, popping, and comparing each character until our containers are empty (a non-match means s isn't a palindrome).

Write the following declarations and implementations:
1. Two instance variables: one for your stack, and one for your queue.
2. A void pushCharacter(char ch) method that pushes a character onto a stack.
3. A void enqueueCharacter(char ch) method that enqueues a character in the queue instance
variable.
4. A char popCharacter method that pops and returns the character at the top of the stack
instance variable.
5. A char dequeueCharacter method that dequeues and returns the first character in the queue
instance variable.
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




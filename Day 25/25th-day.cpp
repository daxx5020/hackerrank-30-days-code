/*
Task
A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.
*/


#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }

    for (int index = 5; index * index <= n; index = index + 6) {
        if (n % index == 0 || n % (index + 2) == 0) {
            return false;
        }
    }
    return true;
}

void processData(string input) {
    vector<string> arr;
    size_t pos = 0;
    string token;
    while ((pos = input.find("\n")) != string::npos) {
        token = input.substr(0, pos);
        arr.push_back(token);
        input.erase(0, pos + 1);
    }

    for (int i = 1; i < arr.size(); i++) {
        int n = stoi(arr[i]);
        if (isPrime(n)) {
            cout << "Prime" << endl;
        } else {
            cout << "Not prime" << endl;
        }
    }
}

int main() {
    string _input;
    string line;
    while (getline(cin, line)) {
        _input += line + "\n";
    }
    processData(_input);
    return 0;
}


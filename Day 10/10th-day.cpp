/*
Task
Given a base-10 integer, n. convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive l's in n's binary representation. When working with different bases, it is common to show the base as a subscript.

Example
n = 125|
The binary representation of 12510 is 11111012. In base 10. there are 5 and 1 consecutive ones in two groups. Print the maximum, 5.
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

string decimalToBinary(int n) {
    string binary;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int maxConsecutiveOnes(int n) {
    string binary = decimalToBinary(n);
    
    int maxOnes = 0;
    int currentOnes = 0;
    
    for (char c : binary) {
        if (c == '1') {
            currentOnes++;
        } else {
            maxOnes = max(maxOnes, currentOnes);
            currentOnes = 0;
        }
    }

    maxOnes = max(maxOnes, currentOnes);
    
    return maxOnes;
}

int main() {
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    int maxConsecutive = maxConsecutiveOnes(n);
    cout << maxConsecutive << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}


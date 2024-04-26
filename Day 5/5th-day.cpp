/*
Task
i = result.
Given an integer, n. print its first 10 multiples. Each multiple n x i (where 1 ≤ i ≤ 10) should be printed on a new line in the form: n x i = result
*/

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

void printMultiplicationTable(int n) {
    for (int i = 1; i <= 10; i++) {
        int result = n * i;
        cout << n << " x " << i << " = " << result << endl;
    }
}

int main() {
    string n_temp;
    getline(cin, n_temp);
    int n = stoi(ltrim(rtrim(n_temp)));
    printMultiplicationTable(n);
    return 0;
}

string ltrim(const string &str) {
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](int ch) {
        return !isspace(ch);
    }));
    return s;
}

string rtrim(const string &str) {
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), [](int ch) {
        return !isspace(ch);
    }).base(), s.end());
    return s;
}



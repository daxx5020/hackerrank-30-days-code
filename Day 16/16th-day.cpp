/*
Task
Read a string. S. and print its integer value; if S cannot be converted to an integer, print Bad String.

Note: You must use the String-to-Integer and exception handling constructs built into your

submission language. If you attempt to use loops/conditional statements, you will get a 0 score.

Input Format
A single string. S.
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
    string S;
    getline(cin, S);
    try {
        cout << to_string(stoi(S)) << endl;
    } catch (const invalid_argument& e) {
        cout << "Bad String" << endl;
    } catch (const out_of_range& e) {
        cout << "Bad String" << endl;
    }
    return 0;
}


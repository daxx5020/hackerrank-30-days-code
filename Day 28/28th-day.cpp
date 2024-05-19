/*
Task
Consider a database table. Emails, which has the attributes Firs  Name and Email ID. Given I rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.

Input Format
The first line contains an integer. N. total number of rows in the table.
Each of the N subsequent lines contains 2 space-separated strings denoting a person's first name and email ID, respectively.
*/


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();
    vector<string> NamesArray;

    for (int NItr = 0; NItr < N; NItr++) {
        string firstName, emailID;
        cin >> firstName >> emailID;

        size_t pos = emailID.find(firstName);

        if (pos != string::npos && emailID.substr(pos + firstName.length()) == "@gmail.com") {
            NamesArray.push_back(firstName);
        }
    }

    sort(NamesArray.begin(), NamesArray.end());

    for (const string& name : NamesArray) {
        cout << name << endl;
    }

    return 0;
}



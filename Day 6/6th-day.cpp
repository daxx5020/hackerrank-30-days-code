/*
Task
Given a string, S. of length N that is indexed from 0 to N - 1, print its even-indexed and odd-indexed characters as 2 space-
separated strings on a single line (see the Sample below for more detail).
Note: 0 is considered to be an even index.
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

void processData(string input) {
    vector<string> inputs;
    size_t pos = 0;
    while ((pos = input.find("\n")) != string::npos) {
        inputs.push_back(input.substr(0, pos));
        input.erase(0, pos + 1);
    }

    for (string input : inputs) {
        string even_letters = "";
        string odd_letters = "";

        for (size_t i = 0; i < input.length(); i++) {
            if (i % 2 == 0) {
                even_letters += input[i];
            } else {
                odd_letters += input[i];
            }
        }

        cout << even_letters << " " << odd_letters << endl;
    }
}

int main() {
    string input;
    string line;
    getline(cin, line); // Read and discard the first line
    while (getline(cin, line)) {
        input += line + "\n";
    }

    processData(input);

    return 0;
}

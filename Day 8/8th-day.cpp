/*
Task
Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will
then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from
your phone book on a new line in the form name=phoneNumber: if an entry for name is not found, print Not found instead.
Note: Your phone book should be a Dictionary/Map/HashMap data structure.
*/

#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore the newline character after reading integer input

    unordered_map<string, string> phoneBook;

    // Populate the phone book
    for (int i = 0; i < n; ++i) {
        string line;
        getline(cin, line);
        istringstream iss(line);
        string name, phoneNumber;
        iss >> name >> phoneNumber;
        phoneBook[name] = phoneNumber;
    }

    // Query the phone book
    string query;
    while (getline(cin, query)) {
        if (query.empty()) break;
        if (phoneBook.find(query) != phoneBook.end()) {
            cout << query << "=" << phoneBook[query] << endl;
        } else {
            cout << "Not found" << endl;
        }
    }

    return 0;
}



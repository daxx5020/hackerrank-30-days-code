/*
Task
Write a Person class with an instance variable, age, and a constructor that takes an integer, initial Age, as a parameter. The
constructor must assign initial Age to age after confirming the argument passed as initial Age is not negative: if a negative
argument is passed as initial Age, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In
addition, you must write the following instance methods:

1. yearPasses should increase the age instance variable by 1.
2. amlOld) should perform the following conditional actions:
    • If age < 13. print You are young ..
    • If age ≥ 13 and age < 18, print You are a teenager..
    • Otherwise, print You are old..
To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the
future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite
yet!
Note: Do not remove or alter the stub code in the editor.
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Person {
private:
    int age;

public:
    Person(int initialAge) {
        if (initialAge < 0) {
            cout << "Age is not valid, setting age to 0." << endl;
            age = 0;
        } else {
            age = initialAge;
        }
    }

    void amIOld() {
        if (age < 13) {
            cout << "You are young." << endl;
        } else if (age >= 13 && age < 18) {
            cout << "You are a teenager." << endl;
        } else {
            cout << "You are old." << endl;
        }
    }

    void yearPasses() {
        age++;
    }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int age;
        cin >> age;
        Person person(age);
        person.amIOld();
        for (int j = 0; j < 3; j++) {
            person.yearPasses();
        }
        person.amIOld();
        cout << endl;
    }
    return 0;
}


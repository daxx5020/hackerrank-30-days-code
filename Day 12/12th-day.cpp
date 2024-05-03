/*
Objective
Today, we're delving into Inheritance. 

Task
You are given two classes. Person and Student. where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

Complete the Student class by writing the following:

• A Student class constructor, which has 4 parameters:
1. A string. firstName.
2. A string, last Name.
3. An integer. id Number.
4. An integer array (or vector) of test scores. scores.

• A char calculate) method that calculates a Student object's average and returns the grade character representative of their calculated average:
*/

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

class Person {
protected:
    string firstName;
    string lastName;
    int identification;
public:
    Person(string firstName, string lastName, int identification) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->identification = identification;
    }
    void printPerson() {
        cout << "Name: " << lastName << ", " << firstName << "\nID: " << identification << "\n";
    }
};

class Student : public Person {
private:
    vector<int> scores;
public:
    Student(string firstName, string lastName, int identification, vector<int> scores) : Person(firstName, lastName, identification), scores(scores) {}

    char calculate() {
        double averageScore = accumulate(scores.begin(), scores.end(), 0.0) / scores.size();

        if (averageScore >= 90) {
            return 'O';
        } else if (averageScore >= 80) {
            return 'E';
        } else if (averageScore >= 70) {
            return 'A';
        } else if (averageScore >= 55) {
            return 'P';
        } else if (averageScore >= 40) {
            return 'D';
        } else {
            return 'T';
        }
    }
};

int main() {
    string firstName;
    string lastName;
    int id;
    int numScores;
    cin >> firstName >> lastName >> id >> numScores;
    vector<int> scores(numScores);
    for (int i = 0; i < numScores; i++) {
        cin >> scores[i];
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    cout << "Grade: " << s->calculate() << "\n";
    return 0;
}




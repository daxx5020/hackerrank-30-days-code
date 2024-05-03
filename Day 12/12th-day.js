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


class Student extends Person {
    constructor(firstName, lastName, identification, scores) {
        super(firstName, lastName, identification);
        this.scores = scores;
    }

    calculate() {
        const averageScore = this.scores.reduce((acc, score) => acc + score, 0) / this.scores.length;

        if (averageScore >= 90) {
            return "O";
        } else if (averageScore >= 80) {
            return "E";
        } else if (averageScore >= 70) {
            return "A";
        } else if (averageScore >= 55) {
            return "P";
        } else if (averageScore >= 40) {
            return "D";
        } else {
            return "T";
        }
    }
}

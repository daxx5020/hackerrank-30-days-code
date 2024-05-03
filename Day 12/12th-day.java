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


import java.util.Scanner;
import java.util.ArrayList;

class Person {
    protected String firstName;
    protected String lastName;
    protected int identification;

    public Person(String firstName, String lastName, int identification) {
        this.firstName = firstName;
        this.lastName = lastName;
        this.identification = identification;
    }

    public void printPerson() {
        System.out.println("Name: " + lastName + ", " + firstName + "\nID: " + identification);
    }
}

class Student extends Person {
    private ArrayList<Integer> scores;

    public Student(String firstName, String lastName, int identification, ArrayList<Integer> scores) {
        super(firstName, lastName, identification);
        this.scores = scores;
    }

    public char calculate() {
        double averageScore = scores.stream().mapToDouble(Integer::doubleValue).average().orElse(0.0);

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
}

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String firstName = scanner.next();
        String lastName = scanner.next();
        int id = scanner.nextInt();
        int numScores = scanner.nextInt();
        ArrayList<Integer> scores = new ArrayList<>();
        for (int i = 0; i < numScores; i++) {
            scores.add(scanner.nextInt());
        }
        Student s = new Student(firstName, lastName, id, scores);
        s.printPerson();
        System.out.println("Grade: " + s.calculate());
        scanner.close();
    }
}



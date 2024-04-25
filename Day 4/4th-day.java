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


import java.io.*;
import java.util.*;

class Person {
    private int age;

    public Person(int initialAge) {
        // Add some more code to run some checks on initialAge
        if (initialAge < 0) {
            System.out.println("Age is not valid, setting age to 0.");
            this.age = 0;
        } else {
            this.age = initialAge;
        }
    }

    public void amIOld() {
        // Do some computations in here and print out the correct statement to the console
        if (this.age < 13) {
            System.out.println("You are young.");
        } else if (this.age >= 13 && this.age < 18) {
            System.out.println("You are a teenager.");
        } else {
            System.out.println("You are old.");
        }
    }

    public void yearPasses() {
        // Increment the age of the person in here
        this.age++;
    }
}

public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int age = scanner.nextInt();
            Person person = new Person(age);
            person.amIOld();
            for (int j = 0; j < 3; j++) {
                person.yearPasses();
            }
            person.amIOld();
            System.out.println();
        }
        scanner.close();
    }
}




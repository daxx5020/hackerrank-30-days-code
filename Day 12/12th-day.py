# Objective
# Today, we're delving into Inheritance. 

# Task
# You are given two classes. Person and Student. where Person is the base class and Student is the derived class. Completed code for Person and a declaration for Student are provided for you in the editor. Observe that Student inherits all the properties of Person.

# Complete the Student class by writing the following:

# • A Student class constructor, which has 4 parameters:
# 1. A string. firstName.
# 2. A string, last Name.
# 3. An integer. id Number.
# 4. An integer array (or vector) of test scores. scores.

# • A char calculate) method that calculates a Student object's average and returns the grade character representative of their calculated average:


class Student(Person):
    def __init__(self, firstName, lastName, idNumber, scores):
        super().__init__(firstName, lastName, idNumber)
        self.scores = scores
    
    def calculate(self):
        average_score = sum(self.scores) / len(self.scores)
        
        if average_score >= 90:
            return 'O'
        elif average_score >= 80:
            return 'E'
        elif average_score >= 70:
            return 'A'
        elif average_score >= 55:
            return 'P'
        elif average_score >= 40:
            return 'D'
        else:
            return 'T'
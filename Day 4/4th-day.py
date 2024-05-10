# Task
# Write a Person class with an instance variable, age, and a constructor that takes an integer, initial Age, as a parameter. The
# constructor must assign initial Age to age after confirming the argument passed as initial Age is not negative: if a negative
# argument is passed as initial Age, the constructor should set age to 0 and print Age is not valid, setting age to 0.. In
# addition, you must write the following instance methods:

# 1. yearPasses should increase the age instance variable by 1.
# 2. amlOld) should perform the following conditional actions:
#     • If age < 13. print You are young ..
#     • If age ≥ 13 and age < 18, print You are a teenager..
#     • Otherwise, print You are old..
# To help you learn by example and complete this challenge, much of the code is provided for you, but you'll be writing everything in the
# future. The code that creates each instance of your Person class is in the main method. Don't worry if you don't understand it all quite
# yet!
# Note: Do not remove or alter the stub code in the editor.


class Person:
    def __init__(self, initial_age):
        if initial_age < 0:
            print("Age is not valid, setting age to 0.")
            self.age = 0
        else:
            self.age = initial_age

    def amIOld(self):
        if self.age < 13:
            print("You are young.")
        elif 13 <= self.age < 18:
            print("You are a teenager.")
        else:
            print("You are old.")

    def yearPasses(self):
        self.age += 1
        

t = int(input())
for i in range(0, t):
    age = int(input())         
    p = Person(age)  
    p.amIOld()
    for j in range(0, 3):
        p.yearPasses()       
    p.amIOld()
    print("")

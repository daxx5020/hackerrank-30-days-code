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


import sys

arr = []

for _ in range(6):
    arr.append(list(map(int, input().rstrip().split())))

rows = len(arr)
cols = len(arr[0])

max_sum = float('-inf')

for i in range(rows - 2):
    for j in range(cols - 2):
        sum_val = (
            arr[i][j] + arr[i][j + 1] + arr[i][j + 2] +
            arr[i + 1][j + 1] +
            arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]
        )

        if sum_val > max_sum:
            max_sum = sum_val

print(max_sum)
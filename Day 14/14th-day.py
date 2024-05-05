# The absolute difference between two integers, a and b, is written as a - b. The maximum absolute difference between two integers in a set of positive integers, elements, is the largest absolute difference between any two integers in elements.

# The Difference class is started for you in the editor. It has a private integer array (elements) for storing N non-negative integers, and a public integer (marimum Difference) for storing the maximum absolute difference.

# Task
# Complete the Difference class by writing the following:
# • A class constructor that takes an array of integers as a parameter and saves it to the elements instance variable.
# • A computeDifference method that finds the maximum absolute difference between any 2 numbers in elements
# and stores it in the maximum.Difference instance variable.

# Input Format
# You are not responsible for reading any input from stdin. The locked Solution class in the editor reads in 2 lines of input. The first line contains N. the size of the elements array. The second line has N space-separated integers that describe the _elements array.


class Difference:
    def __init__(self, a):
        self.__elements = a

	# Add your code here
    maximumDifference = None

    def computeDifference(self):
        max_difference = float('-inf')
        length = len(self.__elements)

        for i in range(length):
            for j in range(i + 1, length):
                difference = abs(self.__elements[i] - self.__elements[j])

                if difference > max_difference:
                    max_difference = difference
        
        self.maximumDifference = max_difference
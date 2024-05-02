# Objective
# Today, we are building on our knowledge of arrays by adding another dimension.

# Context
# Given a 6 × 6 2D Array, A:

# 111000
# 010000
# 111000
# 000000
# 000000
# 000000

# We define an hourglass in A to be a subset of values with indices falling in this pattern in A's graphical representation:

# a b c
#   d
# e f g

# There are 16 hourglasses in A, and an hourglass sum is the sum of an hourglass' values.

# Task
# Calculate the hourglass sum for every hourglass in A, then print the maximum hourglass sum.

# Example
# In the array shown above, the maximum hourglass sum is 7 for the hourglass in the top left corner.

# Input Format
# There are 6 lines of input, where each line contains 6 space-separated integers that describe the 2D array A


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
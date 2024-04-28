# Task
# Given an array. A. of IN integers, print A's elements in reverse order as a single line of space-separated numbers.

# Example
# A = [1, 2, 3, 4)]
# Print 4 3 2 1. Each integer is separated by one space.


import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input().strip())
    arr = list(map(int, input().rstrip().split()))

    for i in range(len(arr) - 1, -1, -1):
        sys.stdout.write(str(arr[i]) + " ")



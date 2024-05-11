# Task
# Given an array, a, of size n distinct elements, sort the array in ascending order using the Bubble Sort algorithm above. Once sorted, print the following 3 lines:

# 1. Array is sorted in numSwaps swaps.
# where numSwaps is the number of swaps that took place.

# 2. First Element: firstElement
# where first Element is the first element in the sorted array.

# 3. Last Element: lastElement
# where last Element is the last element in the sorted array.

# Hint: To complete this challenge, you will need to add a variable that keeps a running tally of all swaps that occur during execution.


#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input().strip())

    a = list(map(int, input().rstrip().split()))

    swap_count = 0
    for i in range(n):
        for j in range(n - 1):
            if a[j] > a[j + 1]:
                a[j], a[j + 1] = a[j + 1], a[j]
                swap_count += 1
        if swap_count == 0:
            break

    print("Array is sorted in {} swaps.".format(swap_count))
    print("First Element:", a[0])
    print("Last Element:", a[-1])


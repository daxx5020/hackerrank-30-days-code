# Task
# Given a base-10 integer, n. convert it to binary (base-2). Then find and print the base-10 integer denoting the maximum number of consecutive l's in n's binary representation. When working with different bases, it is common to show the base as a subscript.

# Example
# n = 125|
# The binary representation of 12510 is 11111012. In base 10. there are 5 and 1 consecutive ones in two groups. Print the maximum, 5.


#!/bin/python3

#!/bin/python3

import math
import os
import random
import re
import sys

def maxConsecutiveOnes(n):
    binary = bin(n)[2:]
    
    maxOnes = 0
    currentOnes = 0
    
    for digit in binary:
        if digit == '1':
            currentOnes += 1
        else:
            maxOnes = max(maxOnes, currentOnes)
            currentOnes = 0
    
    maxOnes = max(maxOnes, currentOnes)
    
    return maxOnes

if __name__ == '__main__':
    n = int(input().strip())

    maxConsecutive = maxConsecutiveOnes(n)
    print(maxConsecutive)

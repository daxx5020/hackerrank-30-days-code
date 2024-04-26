# Task
# i = result.
# Given an integer, n. print its first 10 multiples. Each multiple n x i (where 1 ≤ i ≤ 10) should be printed on a new line in the form: n x i = result


#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())

for i in range(1,11):
    result = n*i
    print(f"{n} x {i} = {result}")


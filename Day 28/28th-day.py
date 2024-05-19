# Task
# Consider a database table. Emails, which has the attributes Firs  Name and Email ID. Given I rows of data simulating the Emails table, print an alphabetically-ordered list of people whose email address ends in @gmail.com.

# Input Format
# The first line contains an integer. N. total number of rows in the table.
# Each of the N subsequent lines contains 2 space-separated strings denoting a person's first name and email ID, respectively.

#!/bin/python3

import sys

if __name__ == '__main__':
    N = int(input().strip())
    NamesArray = []

    for N_itr in range(N):
        first_multiple_input = input().rstrip().split()

        firstName = first_multiple_input[0]
        emailID = first_multiple_input[1]

        if emailID.endswith("@gmail.com"):
            NamesArray.append(firstName)

    sortedNames = sorted(NamesArray)

    for name in sortedNames:
        print(name)


# Task
# Your local library needs your help! Given the expected and actual return dates for a library book. create a program that calculates the fine (if any). The fee structure is as follows:

# 1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine = 0).
# 2. If the book is returned after the expected return day but still within the same calendar month anc year as the expected return date, fine = 15 Hackos × (the number of days late).
# 3. If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos × (the number of months late).
# 4. If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.


import sys

def calculate_fine(d1, m1, y1, d2, m2, y2):
    if y1 > y2:
        return 10000
    elif y1 == y2:
        if m1 > m2:
            return 500 * (m1 - m2)
        elif m1 == m2 and d1 > d2:
            return 15 * (d1 - d2)
    return 0

def main():
    input = sys.stdin.read().split()
    
    d1, m1, y1 = map(int, input[0:3])
    d2, m2, y2 = map(int, input[3:6])
    
    fine = calculate_fine(d1, m1, y1, d2, m2, y2)
    
    print(fine)

if __name__ == "__main__":
    main()


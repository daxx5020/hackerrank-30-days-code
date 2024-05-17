# Task
# A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

# Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.


# Enter your code here. Read input from STDIN. Print output to STDOUT
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


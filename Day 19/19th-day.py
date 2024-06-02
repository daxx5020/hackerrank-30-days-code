# Task
# The AdvancedAr ithmetic interface and the method declaration for the abstract divisor Sum(n) method are provided for you in the editor below.

# Complete the implementation of Calculator class, which implements the AdvancedAr ithmetic interface. The implementation for the divisorSum(n) method must return the sum of all divisors of n.


class Calculator(AdvancedArithmetic):
    def divisorSum(self, n):
        total = 0
        for i in range(1, n + 1):
            if n % i == 0:
                total += i
        return total

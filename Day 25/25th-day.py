# Task
# A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Given a number. n. determine and print whether it is Prime or Not prime.

# Note: If possible, try to come up with a O(Vn) primality algorithm, or see what sort of optimizations you come up with for an O(n) algorithm. Be sure to check out the Editorial after submitting your code.


def is_prime(n):
    if n <= 1:
        return False
    if n <= 3:
        return True

    if n % 2 == 0 or n % 3 == 0:
        return False

    index = 5
    while index * index <= n:
        if n % index == 0 or n % (index + 2) == 0:
            return False
        index += 6
    return True

def process_data(input_data):
    arr = input_data.split('\n')

    for i in range(1, len(arr)):
        if arr[i] == '':
            continue
        n = int(arr[i])
        if is_prime(n):
            print("Prime")
        else:
            print("Not prime")

if __name__ == "__main__":
    input_data = ""
    try:
        while True:
            line = input()
            input_data += line + "\n"
    except EOFError:
        if input_data.strip() != "":
            process_data(input_data)

# Task
# Given a string, S. of length N that is indexed from 0 to N - 1, print its even-indexed and odd-indexed characters as 2 space-
# separated strings on a single line (see the Sample below for more detail).
# Note: 0 is considered to be an even index.


def print_even_odd_characters(s):
    even_chars = s[::2]  # Extract even-indexed characters
    odd_chars = s[1::2]  # Extract odd-indexed characters

    print(even_chars, odd_chars)

if __name__ == "__main__":
    t = int(input().strip())

    for _ in range(t):
        s = input().strip()

        print_even_odd_characters(s)


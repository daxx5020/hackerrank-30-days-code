# Task
# Your local library needs your help! Given the expected and actual return dates for a library book. create a program that calculates the fine (if any). The fee structure is as follows:

# 1. If the book is returned on or before the expected return date, no fine will be charged (i.e.: fine = 0).
# 2. If the book is returned after the expected return day but still within the same calendar month anc year as the expected return date, fine = 15 Hackos × (the number of days late).
# 3. If the book is returned after the expected return month but still within the same calendar year as the expected return date, the fine = 500 Hackos × (the number of months late).
# 4. If the book is returned after the calendar year in which it was expected, there is a fixed fine of 10000 Hackos.


class TestDataEmptyArray:
    @staticmethod
    def get_array():
        return []


class TestDataUniqueValues:
    @staticmethod
    def get_array():
        return [5, 8, 2, 4]

    @staticmethod
    def get_expected_result():
        return 2


class TestDataExactlyTwoDifferentMinimums:
    @staticmethod
    def get_array():
        return [5, 3, 9, 1, 1, 5, 6, 7]

    @staticmethod
    def get_expected_result():
        return 3


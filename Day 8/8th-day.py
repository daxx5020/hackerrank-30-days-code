# Task
# Given n names and phone numbers, assemble a phone book that maps friends' names to their respective phone numbers. You will
# then be given an unknown number of names to query your phone book for. For each name queried, print the associated entry from
# your phone book on a new line in the form name=phoneNumber: if an entry for name is not found, print Not found instead.
# Note: Your phone book should be a Dictionary/Map/HashMap data structure.


import sys

def process_data():
    array = sys.stdin.readlines()
    n = int(array[0])
    phoneBook = {}
    
    for i in range(1,n+1):
        name, phonenumber = array[i].split()
        phoneBook[name] = phonenumber
        
    for arr in array[n+1:]:
        data = arr.strip()
        if data in phoneBook:
             print(f"{data}={phoneBook[data]}")
        else:
            print("Not found")

process_data()



'''Problem:
You are given a list of integers. You need to return the average of the list, except ignore the maximum and the minimum value. If there are multiple copies of the smallest value, ignore just one copy, and likewise for the largest value. Use int division (or floor to int) to produce the final average. You may assume that the array is length 3 or more.'''


# Removing max and min element from the list that's why -2 sould be done because two elements are now deducted form the lsit so the lenth of list also become decreases.

def average(list):
    return int((sum(list)-max(list)-min(list))/(len(list)-2))


if __name__ == "__main__":
    user_list = [1, 2, 3, 4, 100]
    print(average(user_list))

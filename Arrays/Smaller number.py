# Input:
# N = 6
# A[] = {1, 2, 4, 5, 8, 10}
# X = 9
# Output:
# 5
from collections import Counter

a = [1,2,4,5,8,10]
x= 9
n =6
b = [i for i in a if i <x] 
print(len(b))
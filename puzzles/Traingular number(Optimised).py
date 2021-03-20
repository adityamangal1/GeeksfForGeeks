from math import sqrt

def triangular_num(num):
    a = int(sqrt(num*2))
    
    if a*(a+1) == num*2:   #As per formula
        return 1
    return 0


num = int(input("Write your number:"))
print(triangular_num(num))

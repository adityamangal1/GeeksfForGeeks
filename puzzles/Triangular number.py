from math import floor, sqrt


def triangular_num(num):
    if num < 0:
        return False

    '''
    Making quadratic equations 
    Formula - n*(n+1)/2 = num
    n^2 + n = num*2
    n^2 + n - (num*2)= 0
    '''
    c = (-2*num)
    b, a = 1, 1
    d = (b*b)-(4*a*c)  # Formula - b^2-4ac

    # now calculating roots
    root1 = (-b + sqrt(d)) / (2*a)
    root2 = (-b - sqrt(d)) / (2*a)

    if(root1>0 and floor(root1) == root1):
        return 1
    if(root2>0 and floor(root2) == root2):
        return 1
    else:
        return 0 


num = int(input("Write your number:"))
print(triangular_num(num))

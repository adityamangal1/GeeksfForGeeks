from math import factorial

n = 100
count = 0
while(n>=5):
    n//=5
    count+=n
    
print(count)
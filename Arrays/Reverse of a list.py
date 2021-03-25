# 1
# 4
# 1 2 3 4
n = int(input())
while(n>0):
    size = int(input())
    arr = list(map(int, input().split()))
    n-=1
arr.reverse()
print('output is',*arr)


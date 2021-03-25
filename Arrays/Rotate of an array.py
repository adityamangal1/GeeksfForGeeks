'''
Input:
2
5 2
1 2 3 4 5 
10 3
2 4 6 8 10 12 14 16 18 20
'''


def rotate():

    size, num = input().split()
    array = list(map(int, input().split()))
    array = array[int(num):] + array[:int(num)]
    return array


if __name__ == "__main__":
    n = int(input())
    while(n > 0):
        print(*rotate())
        n -= 1

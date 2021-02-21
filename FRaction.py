from fractions import Fraction


def addFraction(num1, den1, num2, den2):

    frac = Fraction(num1, den1) + Fraction(num2, den2)
    print(frac)



if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        arr = list(map(int, input().strip().split(' ')))
        addFraction(arr[0], arr[1], arr[2], arr[3])

# } Driver Code Ends

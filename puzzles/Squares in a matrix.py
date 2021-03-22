'''
For m = n = 1, output: 1
For m = n = 2, output: 4 + 1 [4 of size 1×1 + 1 of size 2×2]
For m = n = 3, output: 9 + 4 + 1 [9 of size 1×1 + 4 of size 2×2 + 1 of size 3×3]
For m = n = 4, output 16 + 9 + 4 + 1 [16 of size 1×1 + 9 of size 2×2 + 4 of size 3×3 + 1 of size 4×4]
In general, it seems to be n^2 + (n-1)^2 + … 1 = n(n+1)(2n+1)/6
  we know that number of squares in a m x m matrix is m(m+1)(2m+1)/6
  So when we add (n-m) columns, total number of squares increased is (n-m)*m(m+1)/2.
So total number of squares is m(m+1)(2m+1)/6 + (n-m)*m(m+1)/2.
'''
# Formula
# No of squares in matrix(m*m) = m*(m+1)*(2*m+1)/6
# Adding the columns to it as = m*(m+1)/2
# Multiply the (n-m) column to it = (n-m)*(m+1)/2

def Squares(m, n):
    # If n is shorter than m swap them
    if(n < m):
        n, m = m, n

    # Merging the formula
    return ((m*(m+1)*(2*m+1)/6+(n-m)*m*(m+1)/2))


def main():
    try:
        m = int(input('Enter the m row of matrix:'))
        n = int(input('Enter the n column of matrix:'))
        print('No of squars in the matrix is', int(Squares(m, n)), end=".")
    except:
        print('wrong input')
        main()


if __name__ == "__main__":
    main()

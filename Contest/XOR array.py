'''Given a value X, you have to construct an array of size N such that xor of all elements of this array equals X.
All elements in the array must be distinct and in the range [0, 230) means greater than or equal to 0 and less than 230.
If there exists multiple answers return any. The driver will print 1 if your constructed array satisfies all conditions, else it will print -1.
If there is no possible answer return any dummy array of size N.

Example 1:

Input:
N = 1
X = 1
Output:
1
Explanation: One possible construction:
ans[] = {X}
We can have one element in the array - X 
itself.
'''


class Solution:
    def constructArray(self, N, X):
        A = [0]*N
        A[N-1] = X
        for i in range(N-1):
            A[i] = i
            A[N-1] ^= i
        if N < 3:
            return A
        if A[N-1] < N-1:
            A[N-1] ^= 2**29
            for j in range(N):
                if (A[j] ^ (2**29)) != A[N-1]:
                    A[j] ^= (2**29)
                    break
        return A



    





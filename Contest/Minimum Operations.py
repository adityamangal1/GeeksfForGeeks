'''Input: 
N = 5
A[] = {2,2,3,2,1}
Output: 
2
Explanation:
In 1st operation, we will multiply 4th element by 2 
modified array A[] = {2,2,3,4,1}
In 2nd operation, we will multiply 5th element by 5
modified array A[] = {2,2,3,4,5}
For every i=1 to N, A[i] is divisible by i
Now, the condition is satisfied.'''


class Solution:
    def gcd(self, a, b):
        if b == 0:
            return a
        return self.gcd(b, a % b)

    def minOperations(self, N, A):
        # code here
        prime = [0]*(N+1)
        prime[1] = 1
        for i in range(2, N+1):
            if prime[i] == 0:
                for j in range(1, N+1):
                    if j*i > N:
                        break
                    prime[j*i] = i
        ans = 0
        for i in range(N):
            g = self.gcd(A[i], i+1)
            y = (i+1)//g
            while y > 1:
                ans += 1
                y # = prime[y]
        return ans

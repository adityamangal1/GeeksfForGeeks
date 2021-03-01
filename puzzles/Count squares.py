from math import sqrt


class Solution:
    def countSquares(self, N):
        return(int(sqrt(N-1)))


ob = Solution()
print(ob.countSquares(9))

class solution:
    def sieveOfEratosthenes(self, n):
        prime = [True for i in range(n+1)]
        p = 2
        while(p*p <= n):
            if prime[p]:
                for i in range(p*p, (n+1), p):
                    prime[i] = False
            p += 1
        list = []
        for p in range(2, n+1):
            if prime[p]:
                list.append(p)
        return list


if __name__ == "__main__":
    ob = solution()
    n = 8
    ans = ob.sieveOfEratosthenes(n)
    print("Prime nnumbers till", n, "are:")
    for i in ans:
        print(i, end=" ")


# Time complexity = O(loglog(n))
# Efficent solution

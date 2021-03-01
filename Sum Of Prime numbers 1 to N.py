# Sieve of eratosthenes method to find the prime numbers
class solution:
    def Prime(self,n):
        # pass
        Prime_list = [True for i in range(n+1)]
        i = 2
        while(i*i<=n):
            if Prime_list[i]:
                for j in range(i*i,(n+1),i):
                    Prime_list[j] = False
            i +=1
        list2 = []
        for i in range(2,n+1):
            if Prime_list[i]:
                list2.append(i)
        return sum(list2) 




if __name__ == "__main__":
    ob = solution()
    print(ob.Prime(4))
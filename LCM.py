from math import gcd

class solution:
    def func(self, A, B):
        list = []
        num = list.append(int(A*B/gcd(A, B)))
        divisor = list.append(gcd(A, B))
        return list


if __name__ == "__main__":
    ob = solution()
    ptr = ob.func(5, 10)
    print(ptr[0], ptr[1])

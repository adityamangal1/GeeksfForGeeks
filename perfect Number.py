# Python3 code to check if a given
# number is perfect or not

# Returns true if n is perfect
def isPerfect(n):
    sum = 1
    i = 2
    while(i*i <= n):
        if n % i is 0:
            sum = sum + i + n/i
        i += 1

    if sum == n and n != 1:
        return 1
    return 0


n = 6
print(isPerfect(n))

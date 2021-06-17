s = "words and 987"
s = s.strip()
ans = ''
sign = 0

try:
    if s[0] == '-':
        sign = -1
        s = s[1:]
    elif s[0] == '+':
        sign = 1
        s = s[1:]

    i = 0
    while(i<len(s) and s[i].isnumeric()):
        ans+=s[i]
        i+=1

    if sign == -1:
        ans = '-' + ans
    ans = int(ans)

    if ans < -2147483648:
        print('-2147483648')
    elif ans > 2147483647:
        print ('2147483647')
    else:
        print(ans)
except:
    print(0)

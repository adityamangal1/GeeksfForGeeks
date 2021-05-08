N = 5
l = [1,1,2,1,1,3]
count = 0
for i in range(len(l)):
    for j in range(i+1,len(l)):
        for k in range(j+1,len(l)):
            # print(l[k])
            if (l[i]<l[j]<l[k]):
                print(1)
            else:
                print(0,'h')

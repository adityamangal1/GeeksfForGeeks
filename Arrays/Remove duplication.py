def remove_dup(n,arr):
    if n==0 and n==1:
        return n
    
    j = 0
    for i in range(0,n-1):

        if arr[i] != arr[i+1]:
            arr[j] = arr[i]
            j+=1
    
    arr[j] = arr[n-1]
    j+=1
    print(j)


remove_dup(3,[1,2,2]) 


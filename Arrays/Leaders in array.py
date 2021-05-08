def leaders(self, arr, size):
    ans = []
    maxx = arr[size-1]
    for i in range(size-1, -1, -1):
        if arr[i] >= maxx:
            maxx = arr[i]
            ans.append(arr[i])
    ans.reverse()
    return ans

n = 13
ans_list = []
PrevNum = 0
NextNum = 1
ans_list.append(PrevNum)
ans_list.append(NextNum)
for i in range(1, 300):
    PrevNum, NextNum = NextNum, NextNum+PrevNum
    ans_list.append(NextNum%100)
print(ans_list[n%300])
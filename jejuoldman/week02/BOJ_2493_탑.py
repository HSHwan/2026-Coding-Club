n=int(input())

stk=[]

lst1=list(map(int,input().split()))

lst=[]

ans_lst=[0 for _ in range(n)]

cnt=1

for elem in lst1:
    lst.append((elem,cnt))
    cnt+=1

for elem in lst:
    while stk:
        if stk[-1][0]<=elem[0]:
            stk.pop()
        else:
            ans_lst[elem[1]-1]=stk[-1][1]
            break
    stk.append(elem)
    

print(*ans_lst)
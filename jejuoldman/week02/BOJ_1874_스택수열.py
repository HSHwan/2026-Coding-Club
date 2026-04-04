n = int(input())
arr = []
log = []

next_num = 1

for i in range(n):
    k = int(input())

    while k >= next_num:
        arr.append(next_num)
        next_num += 1
        log.append('+')

    if arr[-1] == k:
        arr.pop()
        log.append('-')

    else:
        print('NO')
        break
        
for elem in log:
    print(elem)
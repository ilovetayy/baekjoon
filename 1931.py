n = int(input())
time = []
cnt = 0

for i in range(n):
    tmp = input()
    a = tmp.split(" ")
    time.append([int(a[0]), int(a[1])])

time.sort(key=lambda x: (x[1], x[0]))

cur = time[0]
for i in range(1, n):
    if cur[1] <= time[i][0]:
        cnt += 1
        cur = time[i]

print(cnt + 1)

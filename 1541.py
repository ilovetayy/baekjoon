e = input()
nums = e.split('-')
res = 0
totalSum = []

for i in nums:
    a = i.split('+')
    tmp = 0
    for j in a:
        tmp += int(j)
    totalSum.append(tmp)

res += totalSum[0]
for i in range(1, len(totalSum)):
    res -= totalSum[i]

print(res)

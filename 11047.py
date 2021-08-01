def binarySearch(li, key):#upperbound search
    left = 0
    right = len(li) - 1

    while left < right:
        mid = (left + right) // 2
        if li[mid] <= key:
            left = mid + 1
        else:
            right = mid

    return right

tmp = input().split(' ')
n = int(tmp[0])
k = int(tmp[1])
A = []
cnt = 0

for i in range(n):
    A.append(int(input()))

if k >= A[len(A)-1]:
    i = len(A) - 1
else:
    i = binarySearch(A, k) - 1

while k != 0:
    q = k // A[i]
    cnt += q
    k -= q * A[i]
    i = binarySearch(A, k) - 1
    if i < 0:
        break

print(cnt)

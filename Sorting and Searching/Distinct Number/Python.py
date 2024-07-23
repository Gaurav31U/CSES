n = int(input())
arr = [int(key) for key in input().split(' ')]
arr.sort()
i=1
cnt=1
while i<len(arr):
    if arr[i]!=arr[i-1]:
        cnt+=1
    i+=1
print(cnt)
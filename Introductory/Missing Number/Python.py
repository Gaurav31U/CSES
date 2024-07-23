n = int(input())
arr = [int(x) for x in input().split()]
ans = 0
for i in range(1,n+1):
    ans=ans^i
for it in arr:
    ans=ans^it
print(ans)
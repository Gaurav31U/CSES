n = int(input())
arr = [int(key) for key in input().split(' ')]
ans = 0 
last=-1
for it in arr:
    if last==-1:
        last=it
    if last>it:
        ans=ans+(last-it)
    else:
        last=it
print(ans)
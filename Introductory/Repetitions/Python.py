s = input()
ans,c = 0,0
last=s[0]
for i in s:
    if last==i:
        c=c+1
    else:
        last=i
        c=1
    ans=max(ans,c)
print(ans)
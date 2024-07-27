n = int(input())
md = 1e9+7
ans=1
val=2
while n>0:
    if n%2==1:
        n=n-1
        ans=(ans*val)%md
    else:
        val=(val*val)%md
        n=n/2
print(ans)

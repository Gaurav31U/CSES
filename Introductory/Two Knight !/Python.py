n = int(input())
for i in range(1,n+1):
  ans=0
  ans=1+(i-1)*(i-1)/2
  ans=ans*(i-1)*(i+4)
  print(ans)


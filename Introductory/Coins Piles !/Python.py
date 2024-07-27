n = int(input())
for i in range(0,n):
    a=int(input())
    b=int(input())
    if (a+b)%3==0 or (a>2*b) or (b>2*a):
        print("NO")
    else:
        print("YES")

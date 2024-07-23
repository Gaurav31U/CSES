n = int(input())
if n==2 or n==3:
    print("NO SOLUTION")
elif n==4:
    print("2 4 1 3")
else:
    arr=[]
    i=n
    while i>=1:
        arr.append(i)
        i-=2
    i=n-1
    while i>=1:
        arr.append(i)
        i-=2
    print(" ".join(map(str,arr)))
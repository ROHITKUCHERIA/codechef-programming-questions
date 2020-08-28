t=int(input())
for _ in range(t):
    l=[]
    a,b=map(int,input().split())
    arr=list(map(int,input().split()))
    for i in arr:
        if(b%i==0):
            l.append(i)
    if(len(l)>0):
        print(max(l))
    else:
        print(-1)

t=input()
while t:
    t-=1
    n=input()
    a = [int(x) for x in raw_input().split()]
    a.sort()
    b=[]
    s = 0
    e = n-1
    while s <= e:
        if s!=e:
            b.append(a[s])
        b.append(a[e])
        s+=1
        e-=1
    print(b) 
    res=0	
    x = n-1
    while x>0:
        res+=(x+1)*(abs(b[x]-b[x-1]))
        x-=1
    print(res)
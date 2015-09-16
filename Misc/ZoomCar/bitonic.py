t=input()
while t:
    t-=1
    n=input()
    a=[int(x) for x in raw_input().split()]
    #Lets find Largest non decreasing Subarray First
    inc=[1]
    for x in range(1,n):
        if a[x]>a[x-1]:
            inc.append(inc[x-1]+1)
        else:
            inc.append(1)
    #Lets find Largest non increasing Subarray from reverse direction
    dec=[0]*n
    dec[n-1] = 1
    for x in range(n-2,-1,-1):
        if a[x]>a[x+1]:
            dec[x] = dec[x+1]+1
        else:
            dec[x] = 1
    #Find max inc+dex-1
    #Substracting 1 to make sure that we are not counting the pivot element a[k] twice
    res = inc[0]+dec[0]-1
    for x in range(1,n):
        if inc[x]+dec[x]-1 > res:
            res = inc[x]+dec[x]-1
    print(res)        
    
            
        
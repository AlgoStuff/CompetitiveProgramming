t=input()
while t:
    t-=1
    s=raw_input()
    l = len(s)
    res=0
    #We are using Greedy Approach
    for x in range(0,l-1):
        if s[x]==s[x+1]:
            res+=1
    print(res)        
t=int(input())
for i in range(t):


   	f= [int(x) for x in raw_input().split()]
        def gcd(x,y):
            rem=x%y
            while(rem!=0):
                x=y
                y=rem
                rem=x%y
            return y
	l = f[0]
	a = f[1]
    	for x in f[1:]:
    	    a=gcd(a,x)
    	    if(a==1):
            	break
        new=' '
        for j in range(1,l+1):
      		ele=f[j]//a
      	 	new+=str(ele)+' '
    	print(new.strip())
    


from fractions import gcd
primes59 = [ 2 , 3  ,    5 ,     7  ,   11 ,    13  ,   17 ,    19 ,    23  ,   29, 
     31   ,  37   ,  41   ,  43   ,  47   ,  53    , 59]

ans = {}
ans[-1]=0
ans[0] = 0
cnt=0
for x in range(1,24*60*60):
	h = x/(60*60)
	hr = x%(60*60)
	m = hr/60
	mr = hr%60
	s = mr
	#print(h,m,s)
	ans[x]=0
	for y in primes59:
		if h%y == 0 and m%y == 0:
			if s%y ==0:
				cnt+=1
				ans[x] = 1
				print(h,m,s,y)
				break
	ans[x] = ans[x-1]+ans[x]	
print(cnt)
t = input()
while t:
	t-=1
	h,m,s = [int(x) for x in raw_input().split()]
	s = h*60*60 + m*60 +  s
	num = ans[86399]-ans[s-1]
	den = 86399-s-num+1
	if num == 0:
		print(str(0)+":"+str(den))
	else:	
		g = gcd(num,den)
		print(str(num/g)+":"+str(den/g))
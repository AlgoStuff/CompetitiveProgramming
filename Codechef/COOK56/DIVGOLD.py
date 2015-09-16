t=input()
while t:
	t-=1
	n=input()
	s=raw_input()
	res = "Z"*55
	for i in range(0,n):
		if i == 0:
			ss = s[1:n]
		elif i == n-1:
			ss = s[0:n-1]	
		else:	
			ss = s[0:i] + s[i+1:n]
		for j in range(0,n):
			if j == 0:
				res = min(res,s[i]+ss)
			elif j == n-1:
				res= min(res,ss+s[i])	
			else:
				res = min(res,ss[0:j]+s[i]+ss[j:n])		
	print(res)		

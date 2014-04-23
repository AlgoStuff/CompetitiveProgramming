t=input()
cnt = 1

while cnt<=t:
	c,f,x = [float(x) for x in raw_input().split()]
	temp_ans = x/2
	ans = 1000000000
	fac = 2
	c_ans = 0
	while temp_ans <= ans:
		c_ans += (c/fac)
		ans = temp_ans
		temp_ans = c_ans+(x/(fac+f))
		fac=fac+f
	print("Case #"+str(cnt)+": "+str(ans))	
	cnt+=1

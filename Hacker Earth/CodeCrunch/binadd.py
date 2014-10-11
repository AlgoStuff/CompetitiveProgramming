t=input()
while t:
	s1=raw_input()
	s2=raw_input()
	s3=''
	l = len(s1)
	carry = 0
	for x in range(1,l+1):
		if s1[l-x] == '0' and s2[l-x] == '0':
			res = str(carry)
			carry = 0
		elif s1[l-x] == '1' and s2[l-x] == '1':	
			if carry == 0:
				carry = 1
				res = '0'
			elif carry == 1	:
				carry = 1
				res = '1'
		else:
			if carry == 1:
				carry = 1
				res = '0'
			else:
				carry = 0
				res = '1'
		s3=res+s3;
	if carry == 1:
		s3='1'+s3
		print(s3)						
	else:
		print(s3)
	l = len(s3)
	res = 0
	for x in range(0,l):
		if(s3[x]=='1'):
			res += pow(2,l-x-1,1000000007)
	print(res%1000000007)	
	t-=1
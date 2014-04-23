s = raw_input()
p =10
print(ord('9'))
try:
	if isinstance(int(s[0]),int):
		alpha = [0]*26
		res = 1
        	for x in s[1:]:
        		if x == '?':
        			res *= 10
        		else:	
				if alpha[ord(x) - 65] == 0 and x >= 'A':	
					alpha[ord(x)-65] = 1
        				res *= p
        				p-=1

        	print(res)		
except:
	alpha = [0]*26
	res = 1
	if s[0] == '?':
		res *= 9
		for x in s[1:]:
			if x == '?':
				res *= 10
			else:	
				if alpha[ord(x) - 65] == 0 and x >= 'A':	
					alpha[ord(x)-65] = 1
        				res *= p
        				p-=1
        	print(res)
        else:
        	res *= 9
        	p-=1
        	alpha[ord(s[0])-65] = 1
        	for x in s[1:]:
        		if x == '?':
				res *= 10

			else:	
				if alpha[ord(x) - 65] == 0 and x >= 'A':	
					alpha[ord(x)-65] = 1
        				res *= p
        				p-=1
        		

        	print(res)		
        						         		
	

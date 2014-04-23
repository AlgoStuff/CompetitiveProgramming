
n = input()
while n:
	try:
		a,b = [int(x) for x in raw_input().split()]
		if not b == 0:
			print (a/b) , (a%b)
		else:
			print 0,a	
	except:
		pass	
	n-=1	
	

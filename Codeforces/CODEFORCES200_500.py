n = input()
spre = "00"
res = 0
while n:
	s = raw_input()
	if( s != spre ):
		res+=1
	spre = s	
	n-=1
print(res)	

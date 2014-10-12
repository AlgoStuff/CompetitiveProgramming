t=input()
while t:
	s=raw_input()
	vowels=['a','e','i','o','u']
	res = 0
	for x in s:
		if x in vowels:
			res+=1
	if res%2 == 0:
		print("DOKHTAR")
	else:
		print("PESAR")			
	t-=1
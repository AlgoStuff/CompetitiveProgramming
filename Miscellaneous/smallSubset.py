s1 = 0
s2 = 0
array = [int(x) for x in raw_input().split()]
for x in array:
	if s1>s2:
		s2 = s2+x
	else:
		s1 = s1+x
print(abs(s1-s2))			

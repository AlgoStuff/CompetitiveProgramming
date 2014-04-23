a,b = [int(x) for x in raw_input().split()]
s = [int(x) for x in raw_input().split()]
start = 1;
res = 0;
for x in s:
	if start == 1:
		start = x
		res = res + x - 1
	else:
		if start > x:
			res += a - start + x
			start = x
		if start < x:
			res += x - start
			start = x
print(res)			
				 	

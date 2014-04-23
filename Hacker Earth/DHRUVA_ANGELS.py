from fractions import gcd
n,k = [int(x) for x in raw_input().split()]
na = [int(x) for x in raw_input().split()]
ka = [int(x) for x in raw_input().split()]
for x in ka:
	for y in na:
		yes = 0
		for p in range(1,361):
			if ((y*p-x)%360) == 0:
				print("YES")
				yes = 1
				break
		if(yes == 1):
			break
	if yes == 0:
		print("NO")		
			

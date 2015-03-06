import re
import fractions
gcd = fractions.gcd
t=input()
while t:
	t-=1
	s=raw_input()
	op = re.findall(r"[+-]",s)
	frac = re.split(r"[+-]",s)
	f = []
	mul=1
	for x in frac:
		mul *= int(x[2])
	lcm = mul
	numer = int(frac[0][0])*(lcm/int(frac[0][2]))
	p=1
	for x in op:
		if x == '+':
			numer += int(frac[0][0])*(lcm/int(frac[0][2]))
		else:
			numer -= int(frac[0][0])*(lcm/int(frac[0][2]))
		p+=1
	gg = gcd(numer,lcm)
	if lcm/gg == 1:
		print(numer/gg)
	elif numer/gg==1:
		if numer<0:
			print("-1/"+str(lcm/gg))
	else:
		if numer<0:
			print("-"+str(gg)+"_"+str(numer/gg)+"/"+str(lcm/gg))	
		else:
			print(str(gg)+"_"+str(numer/gg)+"/"+str(lcm/gg))	
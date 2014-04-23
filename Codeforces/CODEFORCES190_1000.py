r,g,b = [int(x) for x in raw_input().split()]
res = 0
least = min(r,b,g)

res += least
if least == r:
	res += ((b-least)/3 + (g-least)/3)
elif least == b:
	res += ((r-least)/3 + (g-least)/3)
elif least == g:
	res += ((b-least)/3 + (r-least)/3)		
print(res)	

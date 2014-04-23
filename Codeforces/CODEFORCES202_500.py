cs,ws = [int(x) for x in raw_input().split()]
c = [int(x) for x in raw_input().split()]
w = [int(x) for x in raw_input().split()]
c.sort()
w.sort()

cmin = c[0]
wmin = w[0]
cmax = c[cs-1]
wmax = w[ws-1]
if 2*cmin <= cmax: 
	if wmin > cmax:
		print(cmax)
	else:
		print(-1)	
elif 2*cmin <= 2*cmax:
	if wmin > 2*cmin:
		print(2*cmin)
	else:
		print(-1)
else:
	print(-1)			


nz = [0]*1000000
res = []
nz[1] = 9
np = 1
cp = 1
cn = 9
while cn < 100000000000000:
	nz[cp+1] = int(str(nz[np])+"0")
	cp+=1
	nz[cp+1] = int(str(nz[np])+"9")
	np+=1
	cp+=1
	cn = nz[cp]
for x in range(1,501):
	for y in nz[1:]:
		if y%x == 0:
			res.append(y)
			break
print(res)	

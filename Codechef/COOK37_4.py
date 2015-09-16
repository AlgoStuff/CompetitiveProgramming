
def dis(x1,y1,x2,y2):
	return (pow(x1-x2,2) + pow(y1-y2,2))
res = 0;	
t = input()
while t:
	x1,y,x2,y2,x3,y3 = [float(x) for x in raw_input().split()]
	ab = dis(x1,y,x2,y2)
	ac = dis(x1,y,x3,y3)
	bc = dis(x3,y3,x2,y2)
	if (ab + bc== ac) or (ab+ ac == bc) or (bc + ac== ab):
		res+=1	
	t-=1
print(res)	

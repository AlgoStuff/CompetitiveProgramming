def c2(x,y,op3):
	if op3 == "+":
		return x+y
	else:
		return x*y	
def check(n1,n2,n3,op2,op3):
	if op2 == "+":
		return min(c2(n1+n2,n3,op3),c2(n1,n2+n3,op3),c2(n1+n3,n2,op3))
	else:	
		return min(c2(n1*n2,n3,op3),c2(n1,n2*n3,op3),c2(n1*n3,n2,op3))
t = input()
while t:

	a,b,c,d = [int(x) for x in raw_input().split()]
	op1, op2 , op3 = [x for x in raw_input()]
	
	
	if op1 == "+":
		p1 = check(a+b,c,d,op2,op3)
		p2 = check(a,b+c,d,op2,op3)
		p3 = check(a,b,c+d,op2,op3)
		p4 = check(b,c,a+d,op2,op3)
		p5 = check(a+c,b,d,op2,op3)
		p6 = check(a,c,b+d,op2,op3)
	else:
		p1 = check(a*b,c,d,op2,op3)
		p2 = check(a,b*c,d,op2,op3)
		p3 = check(a,b,c*d,op2,op3)
		p4 = check(b,c,a*d,op2,op3)
		p5 = check(a*c,b,d,op2,op3)
		p6 = check(a,c,b*d,op2,op3)
	
	print(min(p1,p2,p3,p4,p5,p6))
	t-=1

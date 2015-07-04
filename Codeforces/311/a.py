n=input()
a1,b1 = [int(x) for x in raw_input().split()]
a2,b2 = [int(x) for x in raw_input().split()]
a3,b3 = [int(x) for x in raw_input().split()]
r1=a1
r2=a2
r3=a3
x1 = min(n-(r1+r2+r3),b1-a1)
x2 = min(n-(r1+r2+r3)-x1,b2-a2)
x3 = min(n-(r1+r2+r3)-x1-x2,b3-a3)
if x1<0:
	x1=0
if x2<0:
	x2=0
if x3<0:
	x3=0
print(r1+x1),
print(r2+x2),
print(r3+x3)
	

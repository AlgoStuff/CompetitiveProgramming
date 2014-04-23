n = input()
count = n
while n:
	a,b,c  = [int(x) for x in raw_input().split()]
	if b*b - 4*a*c < 0:
		count-=1
	n-=1	
print(count)		

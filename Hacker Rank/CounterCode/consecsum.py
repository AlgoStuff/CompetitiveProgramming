# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.hackerrank.com/contests/countercode/challenges/imba
# Concept : AdHoc
# Reference : None

t=input()
while t:
	t-=1
	n=input()
	start1 = (n+1)/2
	if n%2 == 1:
		start2 = start1-1
	else: 
		start2 = start1+1
	if n%2==1:
		while start1<=n or start2>=1:
			if start1<=n:
				print(start1),
				start1+=1
			if start2>=1:
				print(start2),
				start2-=1
	else:
		while start1>=1 or start2<=n:
			if start1>=1:
				print(start1),
				start1-=1	
			if start2<=n:
				print(start2),
				start2+=1
	print
				
							 

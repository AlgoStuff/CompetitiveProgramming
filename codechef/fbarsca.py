t = input()
while t:
	n,k = [int(x) for x in raw_input().split()]
	print(((pow(k,n) + k*pow(-1,n))/(k+1))%1000000007)
	t-=1

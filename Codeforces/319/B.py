n,m = [int(x) for x in raw_input().split()]
a = [int(x) for x in raw_input().split()]
s = sum(a)
curr = s%m
prev = -1
while curr!=prev:
	

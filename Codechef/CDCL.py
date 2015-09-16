m,c =  [int(x) for x in raw_input().split()]
s = ""
while m:
	sp = raw_input()
	s += sp
	m-=1
n = input()


while n:

	sp = raw_input()
	tmp = sp
	for char in s:
		sp = sp.replace(char,"",1)
	if sp == "":
		print(tmp)
		break				
	else:
		n-=1	

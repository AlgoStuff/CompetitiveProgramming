t=input()
while t:
	m,w=[x for x in raw_input().split()]
	if(not(m.find(w) == -1) or not (w.find(m) == -1)):
		print("YES")
	else:
		r1 = 1
		r2 = 1

		if(len(m) == len(w)):
			print("NO")
		else:
			r1 = 1
			r2 = 1
			check = 0
			index = 0
			for x in m:
				init = 0

				for y in w[index:]:
					index+=1
					if x == y:
						init = 1
						break
				if not init:
					r1 = 0 
					break		
					
                        check = 0
			index = 0
			for x in w:
				init = 0

				for y in m[index:]:
					index+=1
					if x == y:
						init = 1
						break
				if not init:
					r2 = 0 
					break			
			if r1 or r2:
				print("YES")
			else:
				print("NO")							 
	t-=1

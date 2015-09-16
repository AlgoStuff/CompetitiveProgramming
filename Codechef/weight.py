t = input()
while t:
	d = input()
	tw = input()
	sw = input()
	while d:
		str1 =str(tw%sw)
		str2 = str(tw/sw)
		print(str1+" "+str2)
		tw = tw+ tw%sw
		d = d-1
	t = t-1			   

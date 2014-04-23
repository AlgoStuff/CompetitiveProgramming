n = input()
while n:
	s = raw_input()
	sr = s[::-1]
	l = len(s)
	if  l < 5 :
		print("OMG>.< I don't know!")
	elif s[:5] == "miao." and sr[:5] == ".alal":
		print("OMG>.< I don't know!")
	elif s[:5] == "miao.":
		print("Rainbow's")
	elif sr[:5] == ".alal":
		print("Freda's")	
	elif not s[:5] == "miao." and not sr[:5] == ".alal": 	
		print("OMG>.< I don't know!")	
	n-=1

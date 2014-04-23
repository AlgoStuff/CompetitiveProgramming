n = raw_input()
while n.find("144") >= 0:
	n = n[:n.find("144")] + n[n.find("144")+3:]
while n.find("14") >= 0:
	n = n[:n.find("14")] + n[n.find("14")+2:]
while n.find("1") >= 0:
	n = n[:n.find("1")] + n[n.find("1")+1:]		
if n == "":
	print("YES")
else:
	print("NO")		

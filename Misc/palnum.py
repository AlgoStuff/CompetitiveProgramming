def m(s,i,j):
	b = s[i:j]
	if s[i:j] == b[::-1]:
		return 1
	else:
		return 1+ min(m(s,i,j-1),m(s,i+1,j))
ss = raw_input()
print(m(ss,0,len(ss)))

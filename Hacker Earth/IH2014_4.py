def kmp(pattern, text):
	index = []
	shift = computeShifts(pattern)
	startPos = 0
	matchLen = 0
	for c in text:
		while matchLen >= 0 and pattern[matchLen] != c:
			startPos += shift[matchLen]
			matchLen -= shift[matchLen]
		matchLen += 1
		if matchLen == len(pattern):
			index.append(startPos)
			startPos += shift[matchLen]
			matchLen -= shift[matchLen]
	return index	

def computeShifts(pattern):
	shifts = [None] * (len(pattern) + 1)
	shift = 1
	for pos in range(len(pattern) + 1):
		while shift < pos and pattern[pos-1] != pattern[pos-shift-1]:
			shift += shifts[pos-shift-1]
		shifts[pos] = shift
	return shifts

import sys
res = 0
while 1:
	res = 0
	s = sys.stdin.readline().strip('\n')
	if not s:
		break
	b = sys.stdin.readline().strip('\n')
	e = sys.stdin.readline().strip('\n')
	bl = kmp(b,s)
	el = kmp(e,s)
	ls = len(s)
	lb = len(b)
	le = len(e)	
	cache = []
	for x in bl:
		for y in el:
			if y>x and s[x:y+1] not in cache:
				res+=1
				cache.append(s[x:y+1])
	print(res)

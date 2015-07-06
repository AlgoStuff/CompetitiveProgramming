# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.hackerearth.com/codex-6-0/algorithm/dummy-1-1/
# Concept : Maths Formula
# Reference : None

import math
s=[]
for i in range(0,7):
	s.append(raw_input())
n = []	
for x in s:
	n.append(x.count('1') * 1.0)
m = sum(n)/7.0
sm = []
for x in n:
	sm.append((x-m)**2)
ms = sum(sm)/7.0
print("%.4f"%math.sqrt(ms))	
# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : http://www.codechef.com/LTIME25/problems/CHEFSTLT
# Concept : AdHoc
# Reference : None

t=input()
while t:
	t-=1
	s1=raw_input()
	s2=raw_input()
	l = len(s1)
	mini=maxi=0
	for i in range(0,l):
		if s1[i]!=s2[i] and s1[i]!='?' and s2[i]!='?':
			mini+=1
		if s1[i]!=s2[i] or s1[i]=='?' or s2[i] == '?':
			maxi+=1
	print(mini),
	print(maxi)			
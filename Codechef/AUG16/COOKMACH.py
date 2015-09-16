
# INFINITUM
# Rakesh Mahadasa
# National Institute of Technology, Calicut
# Problem Link : https://www.codechef.com/AUG15/problems/COOKMACH
# Concept : Bsearch , Exponentiation
# Reference : None

def bsearch(a,n,key):
	start = 0
	end = n-1
	while start<=end:
		mid = (start+end)/2
		if a[mid]==key:
			return a[mid]
		elif a[mid]>key:
			end = mid-1
		elif a[mid]<key:
			start = mid+1
	return -1	

pow2 = [1]
size = 1
curr = pow2[size-1]
while curr<10000001:
	pow2.append(curr*2)
	size+=1
	curr = pow2[size-1]

t=input()
while t:
	t-=1
	a,b=[int(x) for x in raw_input().split()]
	res = 0
	while True:
		sresult = bsearch (pow2,size,a)
		#print(sresult)
		if sresult>0:
			pivot = sresult
			break
		elif a%2 == 1:
			a=(a-1)/2
			res+=1
		elif a%2 == 0:
			a = a/2	
			res+=1
	if pivot>b:
		while b!=pivot:
			pivot/=2
			res+=1
	else:
		while pivot!=b:
			res+=1
			pivot*=2
	print(res)			
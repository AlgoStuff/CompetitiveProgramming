def max_subarray(A,store):
    max_ending_here = max_so_far = -1000000001
    for x in A:
        max_ending_here = max(x,-1000000001, max_ending_here + x)
        store.append(max_ending_here)
        max_so_far = max(max_so_far, max_ending_here)
    
 
def min_subarray(A,store):
    min_ending_here = min_so_far = 1000000001
    for x in A:
        min_ending_here = min(x,1000000001, min_ending_here + x)
        store.append(min_ending_here)
        min_so_far = min(min_so_far, min_ending_here)

t = input()
while t:
	size = input()
	a = [int(x) for x in raw_input().split()]
	maxf = []
	minf = []
	minb = []
	maxb = []
	ar = a[::-1]
        max_subarray(a,maxf)
        min_subarray(a,minf)
        max_subarray(ar,maxb)
        min_subarray(ar,minb)
	res = -1000000000000000000000
	for x in range(1,size-1):
		res = max(res,maxf[x+1]-minf[x-1],maxb[x-1]-minb[x+1])
	print(res)
	t-=1	
		
		

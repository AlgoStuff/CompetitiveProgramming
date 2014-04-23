import sys

front = []
back = []
def max_subarray(A,n):
    max_ending_here = max_so_far = A[0]
    max_ending_here1 = max_so_far1 = A[n-1]
    front.append(max_so_far)
    back.append(max_so_far1)
    x = 1
    while x < n:
        max_ending_here = max(A[x], max_ending_here + A[x])
        max_so_far = max(max_so_far, max_ending_here)
    	front.append(max_so_far)
    	max_ending_here1 = max(A[n-1-x], max_ending_here1 + A[n-1-x])
        max_so_far1 = max(max_so_far1, max_ending_here1)    	
        back.insert(0,max_so_far1) 
        x+=1   

t = input()
while t:
	n,k = map(int,sys.stdin.readline().split())
	A = map(int,sys.stdin.readline().split())
	front = []
	back = []
	max_subarray(A,n)
	res = -100000000000000000000		
	for x in range(0,n-k-1):
		res = max(front[x] + back[x+k+1] , res)
	print(res)	 
	t-=1	            
	

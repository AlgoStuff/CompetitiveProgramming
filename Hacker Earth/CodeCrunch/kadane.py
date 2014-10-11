def max_subarray(A):
    curr = 0;final = -100000000
    for x in A:
        curr = max(x, curr + x)
        final = max(final, curr)
    return final
t=input()
while t:
	t-=1
	n=input()
	a=[int(x) for x in raw_input().split()]
	print(max_subarray(a))
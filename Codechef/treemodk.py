
n, k = map(int, raw_input().split())
def ans(n, k):
    if n==1:
        return 0 if k!=1 else 1
    MOD = 10**9 + 7
    if k==1:
        return pow(n, n-2,MOD)
    nk = n*k
    if k==2:
        return (pow(nk, n-2, MOD) * pow(nk-2, n, MOD)) % MOD
    return (pow(nk, n-2, MOD) * pow(nk-3, 2*n, MOD)) % MOD
 
print ans(n, k)

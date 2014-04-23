#!/usr/bin/env python2.6
 
import math
a = [0]*1000000
def reverse(n):
    d, r = 0, 0
    while n > 0:
        l = int(math.log10(n))
        r += (10 ** d) * (n // (10 ** (l)))
        d += 1
        n %= (10**l)
    return r
 
def is_prime(n):
    if n == 2:
        return True
    elif n % 2 == 0:
        return False
    else:
        for k in xrange(3, 1 + int(math.sqrt(n)), 2):
            if n % k == 0:
                return False
        return True
 
def main(n):
    for p in xrange(2, n):
        r = reverse(p)
        if (is_prime(p)) and (r != p) and (is_prime(r)) and a[r] == 0:
            print(p)
            a[p] = 1
main(100)

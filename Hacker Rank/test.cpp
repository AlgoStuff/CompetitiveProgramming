#include<iostream>
#include<cmath>
#include<cstdio>
int N = 5000, status[2501];
void prime_gen(){
    int i, j, sqrtN;
    for( i = 2; i <= N >> 1; i++ ) status[i] = 0;
    sqrtN = int( sqrt((double)N) ); // have to check primes up to (sqrt(N))
    for( i = 3; i <= sqrtN; i += 2 ) {
        if( status[i>>1] == 0 ) {
            // so, i is a prime, so, discard all the multiples
            // j = i * i, because it’s the first number to be colored
            for( j = i * i; j <= N; j += i + i )
                status[j>>1] = 1; // status of the multiple is 1
        }
    }
    // print the primes
}
int main() {
    
    printf("2 ");
    prime
    for( i = 3; i <= N; i += 2 ) {
        if( status[i>>1] == 0 )
            printf("%d ", i);
    }
    return 0;
}
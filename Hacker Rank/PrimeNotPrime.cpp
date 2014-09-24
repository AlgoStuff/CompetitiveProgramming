/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/intel-security/challenges/prime-not-prime
//	Concept : Seive of Erathosthenes, Primes, DP
//	Reference :	None
//																		
/***********************************************************************/


//header files

#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<cstdio>
#include<iomanip>
#include<cmath>
#include<set>
#include<map>
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define x getchar()
#define y putchar

using namespace std;

// Fast input
inline void read(ll & n)
{
	n = 0;
	char ch = x; int sign = 1;
	while(ch < '0' || ch > '9'){if(ch == '-') sign = -1; ch = x; }
	while(ch >= '0' && ch<= '9')
	{
		n = n*10 + ch - '0';
		ch = x;
	}
	n *= sign;
}
// Fast output
inline void out(ll n)
{
	char ch[15];
	int ind=0;
	if(n<0) n *= -1;
	if(n == 0)
	{
		y('0');
	}
	while(n > 0)
	{
		ch[ind] = n%10 + '0';
		n /= 10;
		ind++;
	}
	while(ind--) y(ch[ind]);
	y('\n');
}

ull gcd(ull a , ull b){
	if(a == 0 || b == 0) return 1;
	while(a != b){
		if(a > b) a = a - b;
		else b = b - a;
	}
	return a;
}

struct info{
	li non_prime_count;
	ull sum_without_primes;
};
info prime_info[600000];
bool primes[300001];
li prime_store[50000];
li prime_count = 1;
void prime_gen(ll N){
	memset(primes,false,sizeof(primes));
	li i, j, sqrtN;    
    sqrtN = int( sqrt((double)N) );
    for( i = 3; i <= sqrtN; i += 2 ) {

        if( primes[i>>1] == false ) {
            for( j = i * i; j <= N; j += i + i )
                primes[j>>1] = true;
        }
    }
}
int main(){
	int t;
	scanf("%d",&t);
	prime_gen(600000);
	prime_store[prime_count]=2;
	for(int i = 3;i <= 600000;i=i+2){
			if(primes[i>>1] == false){ 
				prime_count++;
				prime_store[prime_count]=i;				
			}
		}
	for(int i = 1;i<=600000;i++){
		if(i%2==0){
			if(i==2){
				prime_info[i].non_prime_count = 1;
				prime_info[i].sum_without_primes = 1;
			}
			else{
				prime_info[i].non_prime_count = prime_info[i-1].non_prime_count+1;
				prime_info[i].sum_without_primes = (prime_info[i-1].sum_without_primes+i)%MOD9;
				
			}
		}
		else{
			if(i==1){
				prime_info[i].non_prime_count = 1;
				prime_info[i].sum_without_primes = 1;	
			}
			else if(primes[i>>1]==false){
				prime_info[i].non_prime_count = prime_info[i-1].non_prime_count;
				prime_info[i].sum_without_primes = prime_info[i-1].sum_without_primes;
			}
			else{
				prime_info[i].non_prime_count = prime_info[i-1].non_prime_count+1;
				prime_info[i].sum_without_primes = (prime_info[i-1].sum_without_primes+i)%MOD9;
			}
		}

	}	
	while(t--){
		ll n;
		cin>>n;
		if(n==1){
			cout<<0<<endl;
		}
		else{
		ull res = 0;
		for(int i = 1;i<=prime_count && prime_store[i]<=n;i++){
			li prime = prime_store[i];
			ull left_sum = ((ull(prime_info[prime].non_prime_count*prime))%MOD9-prime_info[prime].sum_without_primes%MOD9)%MOD9;
			ull right_sum = ((prime_info[n].sum_without_primes-prime_info[prime].sum_without_primes)%MOD9-((ull(prime_info[n].non_prime_count-prime_info[prime].non_prime_count)*prime))%MOD9)%MOD9;
			res = (res + (left_sum + right_sum)%MOD9)%MOD9;
		}
					cout<<res<<endl;			

	}
	}
	return 0;
}

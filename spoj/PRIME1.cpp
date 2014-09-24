/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.spoj.com/problems/PRIME1/
//	Concept : Segmented Seive of Eratosthenes
//	Reference :	http://zobayer.blogspot.in/2009/09/segmented-sieve.html
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



int myprimes[78489];
int seive[1000000>>1]; 

int cnt = 1;
void soe(int n){
	memset(seive,0,sizeof(seive));
	int sqrt_n = sqrt(n);
	for(int i = 3;i <= sqrt_n ; i=i+2){
		if(seive[i>>1] == 0 ){
			for(int j = i*i ; j <= n ; j = j+ (2*i)){
				seive[j>>1] = 1;
			}
		}
	}
	myprimes[cnt++] = 2;
	for(int i = 3 ; i <= n ; i = i+2){
		if(seive[i>>1] == 0) {myprimes[cnt++] = i;}
	}
}
void print_primes(ull a , ull b){
	for(int i = 1; myprimes[i] >= a && myprimes[i] <=b ; i++){
		cout<<myprimes[i]<<endl;
	}

}
void segmented_sieve(ull a , ull b){
	int qprimes[100001];
	memset(qprimes,0,sizeof(qprimes));
	qprimes[1] = 1;
	ull end = sqrt(b);
	for(int i = 1 ; i <= cnt-1 && myprimes[i] <= end ; i++){
		ull start = a/myprimes[i];
		if(start == 0) start = 2*myprimes[i];
		for( int j = start; j <= b ; j = j+myprimes[i]){
			if(j >= a && qprimes[j-a+1] == 0){
				qprimes[j-a+1] = 1;
			}
		}

	}
	for(int i = 1; i <= b-a+1;i++) if(qprimes[i] == 0) cout<<a+i-1<<endl;
}
int main(){
	int t;
	soe(1000000);
	cin>>t;
	while(t--){
		ull a,b;
		cin>>a>>b;
		if(b<=1000000){
			print_primes(a,b);
		}
		else{
			if(a<1000000){
			print_primes(a,1000000);
			segmented_sieve(1000001,b);
		}
		else{
		segmented_sieve(a,b);	
		}
	}
	}
	
	return 0;
}

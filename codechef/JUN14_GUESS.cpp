/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/JUNE14/problems/GUESS
//	Concept : Permutations and Combinations , Probability and Euclidean algorithm of gcd 
//	Reference :	http://en.wikipedia.org/wiki/Euclidean_algorithm
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
ull gcd(ull num , ull den){
	if(num == 0) return 1;
	while(den != 0){
		ull t = den;
		den = num%den;
		num = t;
		}
	return num;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		ull n,m;
		scanf("%llu %llu",&n,&m);
		ull no,ne,mo,me;
		if(n%2){
			no = n/2+1;
			ne = n/2;
		}
		else{
			no = n/2;
			ne = n/2;
		}
		if(m%2){
			mo = m/2+1;
			me = m/2;
		}
		else{
			mo = m/2;
			me = m/2;
		}
		ull numerator = ne*mo + no*me;
		ull denominator = n*m;
		ull buff_gcd = gcd(numerator,denominator);
		printf("%llu/%llu\n",numerator/buff_gcd,denominator/buff_gcd);
	}
	return 0;
}

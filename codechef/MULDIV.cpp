/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut							
//	problem link :	http://www.codechef.com/NCC2014/problems/MULDIV													
//	Concept :	Recurrence relation													
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


int main(){
	ll t,n,m,k;
	cin>>t;
	while(t--){
		cin>>n>>k>>m;
		ll temp_n = n;
		ll count = 0;
		ll div[1000000];
		div[0]=n;
		while(n%k == 0){
			div[count]=n;
			n/=k;
			count++;
		}
		if(count == 0) {cout<<n<<endl; continue;}
		ll rem = m%count;
		ll quo = m/count;
		if(quo%2 == 0){
			cout<<div[rem]<<endl;
		}
		else{
			cout<<div[count-rem]<<endl;
		}
	}
	return 0;
}

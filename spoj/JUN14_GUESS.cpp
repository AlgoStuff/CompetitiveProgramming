/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : 
//	Concept : 
//	Reference :	
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
	while(num != den){
		if(num > den) num = num - den;
		else den = den - num;
	}
	return num;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ull n,m;
		cin>>n>>m;
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
			mo = n/2+1;
			me = n/2;
		}
		else{
			mo = n/2;
			me = n/2;
		}
		ull numerator = ne*mo + no*me;
		ull denominator = n*m;
		buff_gcd = gcd(numerator,denominator);
		if(buff_gcd == 1) cout<<numerator<<"/"<<denominator<<endl;
		else{
			cout<<numerator/buff_gcd<<"/"<<denominator/buff_gcd<<endl;
		}
	}
	return 0;
}

/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link :	http://www.spoj.com/problems/FCTRL2/
//	Concept : Big Integers , Array Based Multiplication 
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
ull res[101][1000];
int pos[100]={0};

void pre(){
	memset(res,0,sizeof(res[0][0])*101*1001);
	res[1][1000]=1;
	pos[1] = 1000;
	for(int i = 2;i<=100;i++){
		int point = 1000;
		ull carry = 0;
		while(point>=pos[i-1]){
			res[i][point] = (res[i-1][point]*i + carry)%10;
			carry = (res[i-1][point]*i+ carry)/10;
			point--;
		}
		while(carry){
			res[i][point] = (carry)%10;
			carry = (carry)/10;
			point--;
		}
		pos[i] = point+1;
	}
}

int main(){
	int t;
	cin>>t;
	pre();
	while(t--){
		int n;
		cin>>n;
		for(int i = pos[n];i <=1000;i++) cout<<res[n][i];
			cout<<endl;
	}
	return 0;
}

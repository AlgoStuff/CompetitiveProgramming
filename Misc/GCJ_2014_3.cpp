/**********************************************************************/
//  																   /	
//	INFINITUM 					                                       /
//	Rakesh Mahadasa													   /
//	National Institute of Technology , Calicut						   /
//																	   /
/**********************************************************************/


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

#define MOD 0
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
int r,c,m;
int t;
cin>>t;
int cnt = 1;
while(cnt<=t){
cin>>r>>c>>m;
int good = r*c-m-1;
int good2 = good+1;
if(r>1)good--;
if(c>1)good--;
if(r>1 && c>1) good--;
cout<<"Case #"<<cnt<<": "<<endl;
if(good<0) cout<<"Impossible"<<endl;
else{
char a[r+1][c+1];
for(int i = 1; i <= r; i++){
for(int j = 1; j <= c; j++){
a[i][j] = '*';
}
}
a[1][1]='c';
if(r>1)a[2][1]='.';
if(c>1)a[1][2]='.';
if(r>1 && c>1)a[2][2]='.';
for(int i = 1; i <= r; i++){
for(int j = 1; j <= c; j++){
a[i][j] = '.';
good2--;
if(good2 ==0){a[1][1]='c'; goto print;}
}}

print:
for(int i = 1; i <= r; i++){
for(int j = 1; j <= c; j++){
cout<<a[i][j];
}
cout<<endl;
}

}
cnt++;
}
return 0;
}

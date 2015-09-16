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
#define MOD 1000000
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

ll a,b,c,d,n;
int ar[1000000];
int pos[1000000];
int main(){
int t;
scanf("%d",&t);

while(t--){
int hash[1000000]={0};

read(n);read(a);read(b);read(c);read(d);
ll arg = d;
ll res = 0;
int ss = 0;
hash[arg]+=1;
ar[ss] = arg;
pos[arg]=ss;
ss++;
int bp = -1;
for(int i = 2; i <= n ; i++){
arg = (((((a*arg)%MOD)*arg)%MOD) + (b*arg)%MOD + c)%MOD;
if(hash[arg] == 0){ar[ss] = arg;pos[arg]=ss;ss++;}
else { bp = n-i+1; break;}
hash[arg]++;
}
bpp:
if(bp>-1){
li div = bp/(ss-pos[arg]);
li rem = bp%(ss-pos[arg]);
int j = 1;
for(int i = pos[arg];i<ss;i++){
hash[ar[i]]+=div;
if(j <= rem) hash[ar[i]]++;
j++;
}}
bool one = true;
sort(ar,ar+ss);
for(int i = 0 ; i < ss;i++){

if(hash[ar[i]]%2){
if(one){
res+=(ar[i]);
one = false;
}
else {res-=(ar[i]); one = true;}
}

}

out(abs(res));
}

return 0;
} 


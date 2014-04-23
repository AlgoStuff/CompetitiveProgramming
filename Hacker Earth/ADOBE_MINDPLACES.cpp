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
ll a[r+1][c+1];
bool search(ll ip,int sr,int sc,int er,int ec){
int pos_r = (sr+er)/2;
int pos_c = (sc+ec)/2;
if(a[pos_r][pos_c] == ip){
cout<<pos_r<<" "<<pos_c<<endl;
return false;
}
else if (a[pos_r][pos_c] < ip){
search(ip,
}
else if (a[pos_r][pos_c] > ip){

}
}
int main(){
int q;
int r,c;
cin>>r>>c;

for(int i= 1; i <=r ; i++){
for(int j= 1; j <=c ; j++){
cin>>a[i][j];
}
}
cin>>q;
while(q--){
ll ip;
cin>>ip;
search(ip,1,1,r,c);
}

return 0;
}

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
int t;
cin>>t;
int c = 1;
int mat1[5][5];
int mat2[5][5];
while (c<=t){
int row1,row2;
cin>>row1;
for(int i = 1; i <= 4;i++)
for(int j = 1; j <= 4;j++)
cin>>mat1[i][j];
cin>>row2;
for(int i = 1; i <= 4;i++)
for(int j = 1; j <= 4;j++)
cin>>mat2[i][j];
int no = 0;
int res;
for(int i = 1; i <= 4;i++){
for(int j = 1; j <= 4;j++){
if(mat1[row1][i] == mat2[row2][j]){
res = mat1[row1][i];
no++;
}}}
cout<<"Case #"<<c<<": ";
if (no > 1) cout<<"Bad magician!"<<endl;
else if (no == 0) cout<<"Volunteer cheated!"<<endl;
else cout<<res<<endl;
c++;
}
return 0;
}

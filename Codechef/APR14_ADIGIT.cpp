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

using namespace std;


int a[100001][10];
int main(){
int m,n;
cin>>n>>m;
string s;
cin>>s;


for(int i = 0; i < 10;i++) a[0][i] = 0;
for(int i = 0; i < n ; i++){
for(int j = 0; j < 10;j++){
a[i+1][j] = a[i][j];
}
a[i+1][s[i]-48]++;
}
int q;
for(int i = 0 ; i < m;i++){
cin>>q;
li res = 0;
for(int i = 0; i < 10;i++){
li curr_res = ((s[q-1]-48) - i)*a[q-1][i];
if (curr_res > 0) res+=curr_res;
else res+=curr_res*-1;
}
cout<<res<<endl;

}
return 0;
}

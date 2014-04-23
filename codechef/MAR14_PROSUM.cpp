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

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

using namespace std;

li a[1000000];

li b[1000001]={0};
li c[1000001] = {0};

int main(){
int t;
scanf("%d",&t);
while(t--){
li n;
scanf("%ld",&n);
b[n+1] = c[n+1] = 0;
for(int i = 1; i <= n ; i++){ scanf("%ld",&a[i]); b[i]=c[i]=0;}
for(int i = n; i >0;i--){
if(a[i] == 0 || a[i] == 1) b[i] = b[i+1]+1;
else b[i] = b[i+1];
if(a[i] == 2) c[i] = c[i+1]+1;
else c[i] = c[i+1];

}
ll res = 0;
for(int i = 1; i <= n ; i++) {
if(a[i] != 1 && a[i] != 0){
if(a[i]!=2)
res+= (n-i-b[i]);
else
res+= (n-i-b[i]-c[i]+1);
}
}
printf("%lld\n",res);
}
return 0;
}

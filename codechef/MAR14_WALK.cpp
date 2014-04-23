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

int main(){
int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a[n];
for(ll i = 0; i < n; i++) cin>>a[i];
ll max = a[0];
ll res = max;
for(ll i = 1; i < n; i++) {

max--;
if(max < a[i]){ res += a[i]-max; max = a[i]; }

}
cout<<res<<endl;
}
return 0;
}

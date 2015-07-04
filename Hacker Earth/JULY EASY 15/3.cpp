/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerearth.com/july-easy-15/algorithm/the-savior-3/
//	Concept : AdHoc
//	Reference :	None
//																		
/***********************************************************************/


//header files

#include <iostream>
#include <string.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <cstdio>
#include <iomanip>
#include <cmath>
#include <set>
#include <map>
#include <ctime>
#include <limits.h>

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define PI 3.14159265


using namespace std;

ll gcd(ll a,ll b){
	while(b){
		ll temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		int a[1001]={0},o=0,e=0;
		int h[100001]={0};
		int h2[100001]={0};
		for(int i = 0; i < n;i++){
			cin>>a[i];
			if(a[i]%2)o++;
			else e++;
			h[a[i]]+=1;
		}
		ll r = ((o*(o-1))/2 + (e*(e-1))/2);
		for(int i=0;i<n;i++)
		{
			if(h2[a[i]]==0){
						r= r-(h[a[i]]*(h[a[i]]-1)/2);
						h2[a[i]]=1;
					}
		}
		cout<<r<<endl;
	}
	return 0;
}

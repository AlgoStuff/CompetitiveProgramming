/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/FEB15/problems/STFM
//	Concept : Maths
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



ll a[10000001]={0};
int main(){

		ll n,m;
		cin>>n>>m;
		
		a[0]=1;
		for(int i = 1; i <= m;i++){
			a[i] = (a[i-1]*i)%m;
		}
		ull res = 0;
		for(int i = 0; i < n;i++){
			ull temp;
			cin>>temp;
			if(temp+1 <=m){
				res+=(a[temp+1]-1)%m;
			}
			else res+=-1;
			if(temp%2==0)
			res+= (((temp%m * (temp/2)%m)%m * (temp+1)%m)%m);
			else
			res+= (((temp%m * temp%m)%m * ((temp+1)/2)%m)%m);
		}
		cout<<res%m<<endl;

	return 0;
}

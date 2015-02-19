/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/FEB15/problems/CHEFCH
//	Concept : Simple Logic
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
		string s;
		cin>>s;
		int res1=0,res2=0;
		int l = s.length();
		for(int i = 0; i <l;i++){
			if(i%2==0 &&s[i]!='+'){
				res1++;
			}
			if(i%2==1 &&s[i]!='-'){
				res1++;
			}
			if(i%2==1 &&s[i]!='+'){
				res2++;
			}
			if(i%2==0 &&s[i]!='-'){
				res2++;
			}
		}
		cout<<min(res2,res1)<<endl;
	}
	return 0;
}

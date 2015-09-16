/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/ALMA2015/problems/ALMA03
//	Concept : Maths , Brute Force
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


ll gcd(ll a , ll b){
	while(b){
		ll t = b;
		b = a%b;
		a=t;
	}
	return a;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		ll abc[n];
		bool a[200];
		for(int i = 0; i < n;i++){
			cin>>abc[i];
			a[i] = false;
		}
		sort(abc,abc+n);
		ll maxs[200] = {0};
		ll max_pos[200] = {0};
		int count = 0;
		int set_num;
		for(int i = 0; i < n;i++){
			ll curr_max = -1;
			bool set_done = false;
			if(!a[i]){
				a[i]=!a[i];
				for(int j = i+1;j<n;j++){
					if(gcd(abc[i],abc[j])>1){
						if(!a[j]){
							curr_max = curr_max>abc[j]?curr_max:abc[j];
							max_pos[j] = count;
							a[j]=!a[j];
						}
						else{
							curr_max = curr_max>abc[j]?curr_max:abc[j];
							set_num = max_pos[j]; 
							set_done = true;
							for(int k = i+1;k<j;k++){
								if(gcd(abc[i],abc[j])>1){
									max_pos[k] = set_num;
								}
							}
						}

					}
				}
				if(set_done){
					maxs[set_num] = curr_max>maxs[set_num]?curr_max:maxs[set_num];
				}
				else{
					maxs[count] = curr_max>abc[i]?curr_max:abc[i];
					count++;
				}
			}
	}
	ll res = 1;
	for(int i = 0; i < count;i++){
		res = (res*maxs[i])%MOD7;
	}
	for(int i =0;i<n;i++){
		if(!a[i]){
			res = (res*abc[i])%MOD7;
		}
	}
	cout<<res<<endl;
}
return 0;
}

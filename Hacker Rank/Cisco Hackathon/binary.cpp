/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/software-challenge/challenges/big-file-system-search
//	Concept : Binary Search
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

ll files[301][301];
bool freq[301][1];



int main(){
	int n;
	memset(freq,false,sizeof(freq[0][0])*301*1);
	cin>>n;
	int temp;
	for(int i = 0; i < n;i++){
		cin>>temp;
		files[i][0] = temp;
		for(int j = 1; j <= temp;j++){
			cin>>files[i][j];
		}
		sort(files[i]+1,files[i]+temp+1);
	}
	int q;
	cin>>q;
	for(int i = 0; i < q;i++){
		ll currfiles[301];
		int currq;
		cin>>currq;
		cin>>temp;
		for(int i = 0; i < temp; i++){
			cin>>currfiles[i];
		}
		if(currq == 1){
			int res = 0;
			for(int i = 0; i < n;i++){
				for(int j = 0; j < temp; j++){
					ll key = currfiles[j];
					bool tf = true;				
					if(!bsearch(key,i)){
						tf = false;
						break;
					}
					if(!tf) break;	 
				}
				if(tf)res++;
			}
			cout<<res<<endl;
		}
	}		
}
return 0;
}

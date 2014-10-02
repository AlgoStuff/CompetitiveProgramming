/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/practice-contest-1-3/algorithm/find-the-divisors-2/
//	Concept : Divisors 
//	Reference :	NOne
//																		
/***********************************************************************/


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
#include<map>
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n;
		long long int res = 0;
		cin>>n;
		for(int i = 1; i <= sqrt(n);i++){
			if(n%i == 0){
				if(n/i != i) res+=2;
				else res+=1;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}

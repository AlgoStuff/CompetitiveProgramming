/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/SMPLX14/problems/SIMCOT
//	Concept : Hashing
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
typedef long long int lli;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009

using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int pos[100001]={0};
		int neg[100001]={0};
		int n;
		cin>>n;
		int res = 0;
		int temp,zero=0;
		for(int i = 0; i < n;i++){
			cin>>temp;
			if(temp<0) neg[temp*-1]+=1;
			else if(temp>0) pos[temp]+=1;
			else if(temp==0) zero++;
		}
		for(int i = 1; i<=100000;i++){
			res+=min(pos[i],neg[i]);
		}
		res+=(zero/2);
		cout<<res<<endl;

	}
	return 0;
}

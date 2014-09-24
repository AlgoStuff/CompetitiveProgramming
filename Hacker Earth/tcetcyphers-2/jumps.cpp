/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/tcetcyphers-2/algorithm/little-vaishnavi-and-plywood-1/
//	Concept : Simple Math
//	Reference :	None
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
		int m,k;
		cin>>m>>k;
		int j = -1;
		int count = 0;
		int k_count = 0;
		for(int i = 1;;i=i+j){
			if(i == m) k_count++;
			if(k_count > k) break;
			count++;
			if(i == 1 || i == 5) j = j*-1;


		}
		cout<<count<<endl;
	}
	return 0;
}

/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/JAN15/problems/ONEKING
//	Concept : Greedy , Overlapping Intervals
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
#define PI 3.14159265


using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		vector< pair < int , int > > v(1000000);
		for(int i =0; i < n;i++){
			cin>>v[i].first>>v[i].second;
		}
		sort(v.begin(),v.begin()+n);
		for(int i =0; i < n;i++){
			cout<<v[i].first<<" "<<v[i].second;
		}
		int res = 1;
		int start = v[0].first;
		int end = v[0].end;
		for(int i =1; i < n;i++){
			if(v[i].first > end) {
				start = v[i].first;
				end = v[i].end;
				res++;
			} 
			else if ( )
		}

	}
	return 0;
}

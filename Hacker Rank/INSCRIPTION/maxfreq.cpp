/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : 
//	Concept : 
//	Reference :	
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


bool compare(int a, int b){
	return a>b;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		cin>>n;
		std::vector< pair<int,int> > v;
		int a[n];
		for(int i = 0 ; i < n;i++){
			cin>>a[i];
			freq[a[i]]++;
		}
		sort(freq,)
	}
	return 0;
}

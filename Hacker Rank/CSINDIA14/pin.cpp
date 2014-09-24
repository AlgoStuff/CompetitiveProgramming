/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/csindia/challenges/pin-problem-1
//	Concept : Preprocessing , Simple Math
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
		int n,m;
		cin>>n>>m;
		int facts[10] = {0};
		int facts_store[10];
		int facts_count = 0;
		int curr_facts;
		for(int i = 0; i < m;i++){
			cin>>curr_facts;
			if(facts[curr_facts] == 0){
				facts[curr_facts] = 1;
				facts_store[facts_count] = curr_facts;
				facts_count++;

			}
		}
		
	}
	return 0;
}

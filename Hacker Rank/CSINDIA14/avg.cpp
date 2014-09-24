/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/csindia/challenges/above-average
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
		int n;
		cin>>n;
		int a[n];
		double sum = 0;
		for(int i = 0; i < n ; i++){
			cin>>a[i];
			sum = sum+a[i];
		}
		double avg = sum/n;
		int res = 0;
		for(int i = 0; i < n ; i++){
			if((double)a[i] > avg) res++;
		}
		cout<<res<<endl;
	}
	return 0;
}

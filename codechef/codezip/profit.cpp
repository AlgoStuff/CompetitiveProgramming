/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/CDZP2014/problems/BKW
//	Concept : Brute force
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
	int m,n;
	cin>>m>>n;
	int prices[11]={0};
	int profits[11]={0};
	for(int i = 0; i < m; i++){
		cin>>prices[i];
	}
	int price= 0;
	for(int i = 0 ; i < m;i++){
		for(int j = 0; j < n;j++){
					cin>>price;
					profits[j] = max(profits[j],price-prices[j]);
		}

	}
	int res = 0;
	for(int i = 0; i < m;i++){
		res+=profits[i];
	}
	cout<<res<<endl;
	return 0;
}

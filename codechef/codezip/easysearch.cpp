/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/CDZP2014/problems/PRST
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
	int n;
	scanf("%d",&n);
	int pair;
	cin>>pair;
	bool f = false;
	int temp;
	for(int i = 0; i < n;i++){
		for (int j = 0; j < n;j++){
			cin>>temp;
			if(temp == pair){
				cout<<"YES"<<endl;
				f = true;
				break;
			}
		}

	}
	if(!f) cout<<"NO"<<endl;
	return 0;
}

/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://hashinclude.excelmec.org/submit?id=4
//	Concept : PnC , Simple Math
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
		int balloon_count[10];
		int min_num;
		int min_count = 1000000;
		for(int i = 0; i< 10;i++){
			cin>>balloon_count[i];
			if(balloon_count[i] < min_count){
				min_count = balloon_count[i];
				min_num = i;
			}
		}
		for(int i = 0; i <= min_count;i++){
			cout<<min_num;
		}
		cout<<endl;
	}
	return 0;
}

/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://code.google.com/codejam/contest/4214486/dashboard
//	Concept : 
//	Reference :	
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


lli fact(int a){
	lli ret = 1;
	for(int i = 1; i <= a;i++){
		ret = (ret*i)%MOD7;
	}
	return ret;
}

int main(){
	int t;
	scanf("%d",&t);
	fact()
	return 0;
}

/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/WPC1501/problems/IITK2P06
//	Concept : AdHoc , Simple Math
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
		lli e,o,num;
		cin>>e>>o;
		num = abs(3*e - 2*o);
		if(num%5 != 0) cout<<-1<<endl;
		else cout<<num/5<<endl;
	}
	return 0;
}

/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/christmas-coding-marathon/algorithm/naughty-sid-and-sev-6/
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
#define PI 3.14159265

using namespace std;




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double a,h,theta;
		cin>>a>>h>>theta;
		double max_angle = (atan(h/a)*180)/PI;
		
		if(max_angle > theta){
			theta = theta*PI/180;
			double res = h-((a*tan(theta))/2);
			int res_int = res;
			if(fabs((float)res_int - res) <0.000001) cout<<res_int<<endl;
			else cout<<res_int+1<<endl;
		}
		else{
			theta = theta*PI/180;
			double res = (h*h)/(2*a*tan(theta));
			int res_int = res;
			if(fabs((float)res_int-res) < 0.000001) cout<<res_int<<endl;
			else cout<<res_int+1<<endl;
		}
	}
	return 0;
}

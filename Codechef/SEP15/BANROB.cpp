    /***********************************************************************/
    //  																		
    //	INFINITUM 					                                    	
    //	Rakesh Mahadasa														
    //	National Institute of Technology , Calicut						
    //	problem link : https://www.codechef.com/SEPT15/problems/BANROB
    //	Concept : AdHoc
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
typedef long long int ll;
typedef long int li;

    #define MOD7 1000000007
    #define MOD9 1000000009
    #define PI 3.14159265


using namespace std;

ll gcd(ll a,ll b){
	while(b){
		ll temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}




int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		double p;
		int m;
		scanf("%d %lf",&m,&p);
		double total = 1000000000;		
		double last = total * p * (( 1 - pow(-1*p,m-1) ) / (1 + p));
		if(m==1) 
			printf("1000000000 0\n");
		else
			printf("%lf %lf\n",total-last,last);		

	}
	return 0;
}
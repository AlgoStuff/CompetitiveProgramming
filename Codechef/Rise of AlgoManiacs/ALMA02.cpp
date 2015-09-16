/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : www.codechef.com/ALMA2015/problems/ALMA02
//	Concept : Maths
//	Reference :	https://gist.github.com/ilya-klyuchnikov/857412c7c69c4051ec2c
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
		ull n,k;
		cin>>n>>k;
		n=k;
		ull exp10 = 1;
		ull td = 9;
		while(n > td) {			
			exp10++;
			n = n-td;
			td = exp10 * (pow(10,exp10)-pow(10,exp10-1));
		}
		ull res = (n-1) / exp10;
		ull cnt = exp10-(n-1)%exp10;
		res = pow(10,exp10-1) + res;
		while(--cnt) {
			res /= 10;
		}
		cout<<res%10<<endl;
	}
	return 0;
}

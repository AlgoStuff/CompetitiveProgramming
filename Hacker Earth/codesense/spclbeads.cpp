/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.hackerearth.com/codesense/algorithm/chintu-and-his-girlfriend/
//	Concept : Hashing
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
	int n, k;
	cin>>n>>k;
	int has[100]={0};
	for(int i = 0; i < n;i++){
		string s;
		cin>>s;
		int l = s.length();
		for(int j = 0;j <l;j++){
			if(has[s[j]-97] == i)
			has[s[j]-97]+=1;
		}

	}
	int res = 0;
	for(int i = 0; i <= 25;i++){
		if (has[i] == n) res++;
	}
	if(res>=k) cout<<":-)"<<endl;
	else
		cout<<":-("<<endl;
	return 0;
}

/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/COOK52/problems/BRACKETS
//	Concept : Longest sequence
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

int longest_ss(string s){
	int l = s.length();
	int bal = 0;
	int max_bal = -1;
	for(int i = 0; i < l;i++){
		if(s[i] == '(') bal++;
		if(s[i] == ')') bal--;
		max_bal = max(max_bal,bal);
	}
	//cout<<max_bal<<endl;
	return max_bal;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string brackets;
		cin>>brackets;
		int max_bal = longest_ss(brackets);
		string ans = "";
		for(int i = 0; i < max_bal;i++){
			ans+="(";
		}
		for(int i = 0 ; i < max_bal;i++){
			ans+=")";
		}
		cout<<ans<<endl;
	}
	return 0;
}

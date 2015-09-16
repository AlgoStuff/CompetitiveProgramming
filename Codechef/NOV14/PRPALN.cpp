/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/NOV14/problems/PRPALN
//	Concept : Palindrome 
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
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin>>s;
		int len = s.length();
		int mismatches = 0;
		int head = 0,tail = len-1;
		bool front, back;
		while (head <= tail){
			if(s[head] == s[tail]){
				head++;
				tail--;
			}
			else{
				tail--;
				mismatches++;
				if(mismatches > 1) break;
			}
		}

		if(mismatches > 1) front = false;
		else front = true;

		mismatches = 0;
		head = 0,tail = len-1;
		while (head <= tail){
			if(s[head] == s[tail]){
				head++;
				tail--;
			}
			else{
				head++;
				mismatches++;
				if(mismatches > 1) break;
			}
		}

		if(mismatches > 1) back = false;
		else back = true;

		if(front || back) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}

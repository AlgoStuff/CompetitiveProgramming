/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/COOK56/problems/DIVGOLD
//	Concept : sorting
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
		char s[55];int n;
		cin>>n>>s;
		string temp = s;
		sort(s,s+n);
		int pos = -1;
		for(int i =0;i<n;i++){
			if(s[i]!=temp[i]){
				pos = i;
				break;
			}
		}
		if(pos == -1)cout<<temp<<endl;
		else{
			int pos2;
			for(int i = 0; i < n;i++){
				if(s[pos] == temp[i]){
					pos2 = i;
				}
			}
			bool pos3 = false;
			for(int i = 0; i <n;i++){
				if(i == pos && !pos3){
					cout<<s[pos];
					i--;
					pos3=true;
				}
				else if(i != pos2)
					{
						cout<<temp[i];
				}
			}
			cout<<endl;
		}
	}
	return 0;
}

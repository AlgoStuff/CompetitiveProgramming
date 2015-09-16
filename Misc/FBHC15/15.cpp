/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : 
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
	int c=1,t;
	scanf("%d",&t);

	while(c<=t){
		cout<<"Case #"<<c<<": ";
		c++;
		string s;
		cin>>s;
		int len = s.length();
		char small = '9';
		int small_pos = 0;
		char large = '1';
		int large_pos = 0;
		for(int i =0 ; i < len;i++){
			if(s[i]!='0' && s[i]<=small){
				small = s[i];
				small_pos = i;
			}
			if(s[i]>=large){
				large = s[i];
				large_pos = i;
			}
		}
		string s1 = s;
		char temp = s1[0];
		s1[0] = small;
		s1[small_pos] = temp;

		string s2 = s;
		temp = s2[0];
		s2[0] = large;
		s2[large_pos] = temp;

		cout<<s1<<" "<<s2<<endl;

	}
	return 0;
}

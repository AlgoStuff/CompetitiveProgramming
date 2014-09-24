/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://www.hackerrank.com/contests/csindia/challenges/bigger-is-greater
//	Concept : DP
//	Reference :	http://www.geeksforgeeks.org/find-next-greater-number-set-digits/
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




int main(){
	int t;
	scanf("%d",&t);
	char s[101];
	while(t--){		
		cin>>s;	
		int len = strlen(s);
		int pos = -1;
		for(int i = len-1;i > 0;i--){
			if(s[i] > s[i-1]){
				pos = i;
				break;
			}
		}
		if(pos == -1){
			cout<<"no answer"<<endl;
		}
		else{
			char fix_min = s[pos-1];
			char curr_min = s[pos];
			int min_pos = pos;
			for(int i = pos+1;i<len;i++){
				if(s[i]>fix_min && s[i]<curr_min){
					curr_min = s[i];
					min_pos = i;
				}
			}
			char temp = s[pos-1];
			s[pos-1] = s[min_pos];
			s[min_pos] = temp;
			sort(s+pos,s+len);
			cout<<s<<endl;
		}
		
	}
	return 0;
}

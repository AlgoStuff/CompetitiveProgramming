/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/NOV14/problems/RBTREE
//	Concept : Trees
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

int red=0,black=0;
void inc_col(int steps,int col){
	if(steps % 2){
		if(col) black++;
		else red++;
	}
	else{
		if(col) red++;
		else black++;	
	}
	//cout<<red<<" "<<black<<endl;
}

int get_steps(lli n){
	int res = 0;
	while(n){
		res+=1;
		n=n/2;
	}
	return res;
}

int main(){
	int t;
	scanf("%d",&t);
	int col = 1;
	while(t--){
		red=0;
		black=0;
		int a,b;
		string q;
		cin>>q;
		if(q == "Qi") col = 1 - col;
		else{
			cin>>a>>b;
			int steps_a = get_steps(a);
			int steps_b = get_steps(b);
			//cout<<steps_a<<" "<<steps_b<<endl;
			inc_col(steps_a,col);
			if(a!=b)
			inc_col(steps_b,col);
			//cout<<red<<" "<<black<<endl;
			int diff = abs(steps_a - steps_b );
			int is_level = true;
			char adjusted = 'n'; 
			if(steps_a > steps_b){
				adjusted = 'a';
			}
			else if (steps_b > steps_a){
				adjusted = 'b';
			}
			for(int i = 1; i <= diff;i++){
				is_level = false;
				if(steps_a > steps_b){ 
					a = a/2; 
					steps_a--;
					if(steps_a!=steps_b)
					inc_col(steps_a,col);
				}
				else if(steps_b > steps_a) {
					b = b/2; 
					steps_b--;
					if(steps_a!=steps_b)
					inc_col(steps_b,col);
				}				
			}
			//cout<<"Levelled"<<endl;
			//cout<<a<<" "<<b<<" "<<steps_a<<" "<<steps_b<<" "<<red<<" "<<black<<endl;
			if(a!=b and !is_level){
				if(adjusted == 'a'){
					inc_col(steps_a,col);
				}
				else{
					inc_col(steps_b,col);
				}
			}
			while(a!=b){
				a=a/2;
				steps_a--;
				if (a !=b )
				inc_col(steps_a,col);

				b=b/2;
				steps_b--;
				if ( a!= b )
				inc_col(steps_b,col);
			}
			if  (q == "Qb") {
				cout <<black<<endl;
			}
			else{
				cout<<red<<endl;
			}
		}
	}
	return 0;
}

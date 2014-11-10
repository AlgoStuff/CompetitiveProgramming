/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://code.google.com/codejam/contest/6214486/dashboard#s=p2
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

using namespace std;


struct node{
	string prev;
	string next;
	string curr;
};

int main(){
	int t;
	scanf("%d",&t);
	
	
	int c = 1;
	while(c<=t){
		node city[10001];
		std::map<string, int> has;
		std::map<string, int>::iterator has_it;
		int n;
		cin>>n;
		int cp = 0;
		for(int i =0; i < n;i++){
			string curr,next;
			cin>>curr>>next;
			has_it = has.find(curr);
			if(has_it==has.end()){
				has[curr]=cp;
				city[cp].curr = curr;
				city[cp].next = next;
				city[cp].prev="";
				cp+=1;
			}
			else{

				city[has_it->second].next = next;
			}
			has_it = has.find(next);
			if(has_it==has.end()){
				has[next]=cp;
				city[cp].curr = next;
				city[cp].prev = curr;
				city[cp].next = "";
				cp+=1;

			}
			else{
				city[has_it->second].prev = curr;
			}
		}
		cout<<"Case #"<<c<<": ";
		c+=1;
		int start;
		for(int i =0; i < cp;i++){
			if(city[i].prev=="") {start = i; break;}
		}

		while(city[start].next != ""){
			cout<<city[start].curr<<"-"<<city[start].next<<" ";
			start = (has.find(city[start].next))->second;
		}
		cout<<endl;
	}
	return 0;
}

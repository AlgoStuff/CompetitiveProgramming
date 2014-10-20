/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : https://code.google.com/codejam/contest/3214486/dashboard
//	Concept : Increasing sequences
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
string zero = "0";
string one = "1";
int possible[101][11];
string s[101];
string correct[10] = {
	"1111110",
	"0110000",
	"1101101",
	"1111001",
	"0110011",
	"1011011",
	"1011111",
	"1110000",
	"1111111",
	"1111011"
};

bool is_possible(string ss,int num){
	for(int i = 0; i <= 6;i++){
		char cs = correct[num][i];
		if(ss[i] == '1' && cs=='0'){ 
			//cout<<"ret "<<i<<endl;
			return false;}
	
}
	return true;
}					
int main(){
	int t;
	scanf("%d",&t);
	int c = 1;
	while(c<=t){
		cout<<"Case #"<<c<<": ";
		c++;
		int n;
		cin>>n;
		for(int i = 0 ; i < n;i++){
			cin>>s[i];
		}
		for(int i = 0; i < n;i++){
			for(int j = 0; j <= 9;j++){
				if(is_possible(s[i],j)){
					possible[i][j] = 1;
				}
				else{
					possible[i][j]=0;
				}
			}
		}
		/*
		for(int i = 0; i < n;i++){
			for(int j = 0 ; j <= 9;j++){
				cout<<possible[i][j]<<" ";
			}
			cout<<endl;
		}
		*/
		int count  = 1;
		int curr_num = 0;
		int start = 0;
		int fstart;
		bool is_amb = false;
		int cor_cnt = 0;
		int final;
		for(int j = 0; j <= 9; j++){
			count = 0;
			if(possible[0][j]){
				start = j;
				curr_num = j;
				for(int i = 0; i<n;i++){
					if(possible[i][curr_num%10]){
						count++;
						curr_num--;
						if(curr_num < 0) curr_num = 9;
						//cout<<j<<" "<<count<<endl;
					}
					else{
						break;
					}
				}
				if(count == n){cor_cnt++;
					fstart = start;
					final = curr_num;
								if(cor_cnt>1){
									is_amb = true;
									break;
								}
								}
			}
	}
	if(!is_amb && cor_cnt == 1) {
			int res[10] = {1,1,1,1,1,1,1};
	for(int i = 0; i < n;i++){
		fstart = fstart%10;
		for(int j = 0; j < 7 ; j++){
			char cs = correct[fstart][j];
			char ss = s[i][j];
			if(ss == '0' && cs=='1'){
				res[j]=0;
			}
		}
		fstart--;
		if(fstart < 0) fstart = 9;

	}
	/*
	for(int i = 0; i < 7;i++){
		cout<<res[i]<<" ";
	}*/
		for(int i =0;i<=6;i++){
			if(res[i] == 0)cout<<0;
			else {
				cout<<correct[(final)%10][i];
				
		}
	}
		cout<<endl;
	}

	else{
		//cout<<cor_cnt<<endl;
		cout<<"ERROR!"<<endl;
	}
}
return 0;
}

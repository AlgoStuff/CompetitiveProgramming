/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/JUNE14/problems/FORGETPW
//	Concept : Smart Hashing and Logic , Ad Hoc
//	Reference :	None
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
#include<ctime>

//typedefs

typedef unsigned long long int ull;
typedef long long int ll;
typedef long int li;

#define MOD7 1000000007
#define MOD9 1000000009
#define x getchar()
#define y putchar

using namespace std;

// Fast input
inline void read(ll & n)
{
	n = 0;
	char ch = x; int sign = 1;
	while(ch < '0' || ch > '9'){if(ch == '-') sign = -1; ch = x; }
	while(ch >= '0' && ch<= '9')
	{
		n = n*10 + ch - '0';
		ch = x;
	}
	n *= sign;
}
// Fast output
inline void out(ll n)
{
	char ch[15];
	int ind=0;
	if(n<0) n *= -1;
	if(n == 0)
	{
		y('0');
	}
	while(n > 0)
	{
		ch[ind] = n%10 + '0';
		n /= 10;
		ind++;
	}
	while(ind--) y(ch[ind]);
	y('\n');
}

ull gcd(ull num , ull den){
	if(num == 0) return 1;
	while(num != den){
		if(num > den) num = num - den;
		else den = den - num;
	}
	return num;
}


int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		bool visited[150];
		char mod_val[150];
		memset(visited,false,sizeof(visited));
		char c,p;
		int n;
		scanf("%d",&n);
		while(n--){
			cin>>c>>p;
			if(visited[c]==false){
				visited[c] = true;
				mod_val[c] = p;
			}
		}
		string s;
		cin>>s;
		int len = s.length();
		bool is_dot = false;
		bool is_start_set = false;
		bool is_end_set = false;
		int dot_pos,end_pos;
		bool r_p = false,f_p=false;
		for(int i = 0 ; i < len ; i++){
			char curr_char;
			if(visited[s[i]]){
				curr_char = mod_val[s[i]];
				if(mod_val[s[i]] != '0'){
					is_start_set = true;
					
				}
			}
			else if(visited[s[i]] == false){
				curr_char = s[i];
				if(s[i] != '0'){
					is_start_set = true;
				}
			}
			if(curr_char == '.') { is_dot = true; dot_pos = i; break;}
			if(is_start_set){ 
				r_p = true;
				printf("%c",curr_char);}
		}
		if(is_dot){
			for(int i = len -1; i >= dot_pos ; i--){
				if(visited[s[i]]){
					if(mod_val[s[i]] != '0'){
						is_end_set = true;
					}
				}
				else if(visited[s[i]] == false){
					if(s[i] != '0'){
						is_end_set = true;
					}
				}

				if(is_end_set){
					end_pos = i; break;
				}
			}
			if(end_pos != dot_pos){
				char curr_char;
				for(int i = dot_pos; i <= end_pos;i++){
					if(visited[s[i]]){
						curr_char = mod_val[s[i]];
					}
					else
						curr_char = s[i];
					f_p = true;
					printf("%c",curr_char);	
				}
			}
		}
		if(r_p == false && f_p == false) printf("0");
		printf("\n");
	}
	return 0;
}
/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : http://www.codechef.com/MARCH15/problems/DEVCLASS
//	Concept : Easy DP
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


int case0(string s){
	int len = s.length();
	int nb=0,ng = 0;
	for(int i = 0; i < len;i++){
		if(s[i] == 'B')nb++;
		else ng++;
	}
	if(abs(nb-ng)>1)return -1;
	if(nb==ng){
		int res1=0,res2=0;
		string t1= "BG",t2="GB";
		string s1="",s2="";
		for(int i = 1; i <= len/2;i++){
			s1+=t1;
			s2+=t2;
		}
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]) res1++;
			if(s[i]!=s2[i]) res2++;
		}
		res1=res1/2;
		res2=res2/2;
		return (res1>res2?res2:res1);
	}
	if(nb>ng){
		int res=0;
		string t1= "BG";
		string s1="";
		for(int i = 1; i <= (len-1)/2;i++){
			s1+=t1;
		}
		s1+="B";
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]) res++;
		}
		res/=2;
		return res;
	}
	if(ng>nb){
		int res=0;
		string t1= "GB";
		string s1="";
		for(int i = 1; i <= (len-1)/2;i++){
			s1+=t1;
		}
		s1+="G";
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]) res++;
		}
		res/=2;
		return res;
	}
}


int case1(string s){
	int len = s.length();
	int nb=0,ng = 0;
	for(int i = 0; i < len;i++){
		if(s[i] == 'B')nb++;
		else ng++;
	}
	if(abs(nb-ng)>1)return -1;
	if(nb==ng){
		int bg1[len+1],gb1[len+1];
		int bg2[len+1],gb2[len+1];
		memset(bg1,0,sizeof(bg1));
		memset(bg2,0,sizeof(bg2));
		memset(gb1,0,sizeof(gb1));
		memset(gb2,0,sizeof(gb2));
		int bgc1 = 0, gbc1 = 0;
		int bgc2 = 0, gbc2 = 0;
		int res1=0,res2=0;
		string t1= "BG",t2="GB";
		string s1="",s2="";
		for(int i = 1; i <= len/2;i++){
			s1+=t1;
			s2+=t2;
		}
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]){
				if(s[i]=='B'){
					bg1[bgc1]=i;
					bgc1++;
				}
				else{
					gb1[gbc1]=i;
					gbc1++;
				}
			}
			if(s[i]!=s2[i]){
				if(s[i]=='B'){
					bg2[bgc2]=i;
					bgc2++;
				}
				else{
					gb2[gbc2]=i;
					gbc2++;
				}
			}
		}
		for(int i = 0; i < bgc1;i++){
			res1+=abs(bg1[i]-gb1[i]);
		}
		for(int i = 0; i < bgc2;i++){
			res2+=abs(bg2[i]-gb2[i]);
		}
		return (res1>res2?res2:res1);
	}
	if(nb>ng){
		int res=0;
		int bg[len+1],gb[len+1];
		memset(bg,0,sizeof(bg));
		memset(gb,0,sizeof(bg));
		int bgc=0,gbc=0;
		string t1= "BG";
		string s1="";
		for(int i = 1; i <= (len-1)/2;i++){
			s1+=t1;
		}
		s1+="B";
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]){
				if(s[i]=='B'){
					bg[bgc]=i;
					bgc++;
				}
				else{
					gb[gbc]=i;
					gbc++;
				}
			}
		}
		for(int i = 0; i < bgc;i++){
			res+=abs(bg[i]-gb[i]);
		}
		return res;
	}
	if(ng>nb){
		int res=0;
		int bg[len+1],gb[len+1];
		memset(bg,0,sizeof(bg));
		memset(gb,0,sizeof(bg));		
		int bgc=0,gbc=0;
		string t1= "GB";
		string s1="";
		for(int i = 1; i <= (len-1)/2;i++){
			s1+=t1;
		}
		s1+="G";
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]){
				if(s[i]=='B'){
					bg[bgc]=i;
					bgc++;
				}
				else{
					gb[gbc]=i;
					gbc++;
				}
			}
		}
		for(int i = 0; i < bgc;i++){
			res+=abs(bg[i]-gb[i]);
		}
		return res;
	}
}

ll case2(string s){
	int len = s.length();
	int nb=0,ng = 0;
	for(int i = 0; i < len;i++){
		if(s[i] == 'B')nb++;
		else ng++;
	}
	if(abs(nb-ng)>1)return -1;
	if(nb==ng){
		int bg1[len+1],gb1[len+1];
		int bg2[len+1],gb2[len+1];
		memset(bg1,0,sizeof(bg1));
		memset(bg2,0,sizeof(bg2));
		memset(gb1,0,sizeof(gb1));
		memset(gb2,0,sizeof(gb2));
		int bgc1 = 0, gbc1 = 0;
		int bgc2 = 0, gbc2 = 0;
		ll res1=0,res2=0;
		string t1= "BG",t2="GB";
		string s1="",s2="";
		for(int i = 1; i <= len/2;i++){
			s1+=t1;
			s2+=t2;
		}
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]){
				if(s[i]=='B'){
					bg1[bgc1]=i;
					bgc1++;
				}
				else{
					gb1[gbc1]=i;
					gbc1++;
				}
			}
			if(s[i]!=s2[i]){
				if(s[i]=='B'){
					bg2[bgc2]=i;
					bgc2++;
				}
				else{
					gb2[gbc2]=i;
					gbc2++;
				}
			}
		}
		for(int i = 0; i < bgc1;i++){
			res1+=(abs(bg1[i]-gb1[i])*abs(bg1[i]-gb1[i]));
		}
		for(int i = 0; i < bgc2;i++){
			res2+=(abs(bg2[i]-gb2[i])*abs(bg2[i]-gb2[i]));
		}
		return (res1>res2?res2:res1);
	}
	if(nb>ng){
		ll res=0;
		int bg[len+1],gb[len+1];
		memset(bg,0,sizeof(bg));
		memset(gb,0,sizeof(bg));
		int bgc=0,gbc=0;
		string t1= "BG";
		string s1="";
		for(int i = 1; i <= (len-1)/2;i++){
			s1+=t1;
		}
		s1+="B";
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]){
				if(s[i]=='B'){
					bg[bgc]=i;
					bgc++;
				}
				else{
					gb[gbc]=i;
					gbc++;
				}
			}
		}
		for(int i = 0; i < bgc;i++){
			res+=(abs(bg[i]-gb[i])*abs(bg[i]-gb[i]));
		}
		return res;
	}
	if(ng>nb){
		ll res=0;
		int bg[len+1],gb[len+1];
		memset(bg,0,sizeof(bg));
		memset(gb,0,sizeof(bg));		
		int bgc=0,gbc=0;
		string t1= "GB";
		string s1="";
		for(int i = 1; i <= (len-1)/2;i++){
			s1+=t1;
		}
		s1+="G";
		for(int i = 0; i < len;i++){
			if(s[i]!=s1[i]){
				if(s[i]=='B'){
					bg[bgc]=i;
					bgc++;
				}
				else{
					gb[gbc]=i;
					gbc++;
				}
			}
		}
		for(int i = 0; i < bgc;i++){
			res+=(abs(bg[i]-gb[i])*abs(bg[i]-gb[i]));
		}
		return res;
	}
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int type;
		string s;
		cin>>type>>s;
		if(type == 0) cout<<case0(s)<<endl;
		if(type == 1) cout<<case1(s)<<endl;
		if(type == 2) cout<<case1(s)<<endl;
	}	
	return 0;
}

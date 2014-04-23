#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string.h>
using namespace std;
typedef unsigned long long  ull;
int main(){
string s;
int p = 10;
int zero = 0;
int alpha[26] = {0};
cin>>s;
ull len = s.length();
ull res = 1;
if (s[0] == '?'){
res = 9;

for (ull i = 1; i < len;i++){
	if(s[i] == '?') zero++;
	else if (alpha[s[i]-65] == 0 and s[i] >= 'A')
			{
			 alpha[s[i]-65] = 1;
			 res = res*p;
			 p--;
			
			}											
}

cout<<res;
for(int i = 1; i <= zero;i++)cout<<0;
cout<<endl;
}
else if( s[0] >= 'A'){
res = 9;
p--;
alpha[s[0]-65] = 1;
for (ull i = 1; i < len;i++){

	if(s[i] == '?') zero++;
	else if (alpha[s[i]-65] == 0 and s[i] >= 'A')
			{
			 alpha[s[i]-65] = 1;
			 res = res*p;
			 p--;
			
			}

} 
cout<<res;
for(int i = 1; i <= zero;i++)cout<<0;
cout<<endl;
}

else{

for (ull i = 1; i < len;i++){
	if(s[i] == '?') zero++;
	else if (alpha[s[i]-65] == 0 and s[i] >= 'A')
			{
			 alpha[s[i]-65] = 1;
			 res = res*p;
			 p--;
			
			}

}
cout<<res;
for(int i = 1; i <= zero;i++)cout<<0;
cout<<endl;
}
}

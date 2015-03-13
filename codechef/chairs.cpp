#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
typedef long long int ll;
ll m,n;
bool instring=true,adjstring=true;
void inadj(string str1,string str2){
if(str1[0] == str2[0]) {instring = false; cout<<"NO"<<endl; return; }
for(ll i= 0;i<n;i++){ if(str1[0] != str1[i]) {  instring = false; cout<<"NO"<<endl; break; }
if(str2[0] != str2[i]) { instring = false; cout<<"NO"<<endl;break;}

}
}

int main()
{
ll k=0;
cin>>m;
cin>>n;
int p;
string str[m];
for(ll i = 0 ; i < m; i++){for(ll j = 0; j < n ; j++){ cin>>p;
ostringstream s;
s<<p;
str[i]=str[i]+s.str(); }}

while(instring && k<m-1){

inadj(str[k],str[k+1]);

k++;
}
if(instring)cout<<"YES"<<endl;
return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
typedef long int l;
int main(){
l t,p,i,j,n;
cin>>t;
while(t--){
cin>>ws;
int a[53] = {0};
string m,w;
cin>>m;
cin>>w;
m = m+w;
l lenp = m.length();
for( i = 0 ; i < lenp ; i++){
a[m[i] - 96]++;
} 
cin>>n;
string c,f="";
while(n--){
cin>>c;
f = f+c;
}
l lenc = f.length();
bool chk = true;
for(i = 0 ; i < lenc; i++){
if(a[f[i] - 96] == 0) { cout<<"NO"<<endl; chk = false; break;}
else a[f[i] - 96]--;
}
if(chk)cout<<"YES"<<endl;
}
return 0;
}

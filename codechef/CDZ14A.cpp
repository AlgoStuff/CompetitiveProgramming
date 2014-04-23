#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

int main(){
int t;
scanf("%d",&t);
while(t--){
string s;
scanf("%s",&s);
int l = s.length();
int r=0,b=0,g=0,res=1000000;
for(int i = 1 ; i <= l; i++){
if(s[i-1] =='R'){r=i;}
if(s[i-1] =='B'){b=i;}
if(s[i-1] =='G'){g=i;}
if(r&&b&&g&&res> max(r,max(b,g)) - min(r,min(b,g)) + 1) res = max(r,max(b,g)) - min(r,min(b,g)) + 1; 
}
printf("%d\n",res);
}
return 0;
}

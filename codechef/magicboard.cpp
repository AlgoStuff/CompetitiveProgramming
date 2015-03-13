#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
typedef  unsigned long long int ull;
int main(){
char s[8];
int rs,svr,cq,rq,svc,cs;
ull n,q,c=0;
cin>>n;
cin>>q;
int a[n][n];
for(ull i = 0; i < n ; i++){for(ull j = 0; j < n ; j++){a[i][j]=0;}}
while(c<q){

cin>>s;
switch(s[0]){
case 'R':
if(s[3] == 'Q'){

cin>>rq;
int rqc=0;
for(int i = 0;i < n;i++){if(a[rq][i]==0){rqc++;}}
cout<<rqc<<endl;}
else{
cin>>rs;
cin>>svr;
for(int i = 0;i < n;i++){a[rs][i]=svr;}
}
break;
case 'C':
if(s[3] == 'Q'){

cin>>cq;
int cqc=0;
for(int i = 0;i < n;i++){if(a[i][cq]==0){cqc++;}}
cout<<cqc<<endl;}
else{cin>>cs;
cin>>svc;
for(int i = 0;i < n;i++){a[i][cs]=svc;}
}
break;}

c++;}
return 0;
}

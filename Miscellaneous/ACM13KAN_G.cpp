#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;

int main(){
int t,m,n;
cin>>t;
int c = 1;
while(c <= t){

cin>>n>>m;
double a[n+1];
for(int i = 0 ; i < n ; i++) cin>>a[i];
sort(a,a+n);
cout<<"Case "<<c<<":"<<endl;
int cm = 1;
while( cm <= m){

double amount;

cin>>amount;
cout<<"Scenario "<<cm<<":"<<endl;
for(int i = n-1 ; i >= 0 && amount; i--){
int ans = amount/a[i];
if(ans){
cout<<setprecision(2)<<a[i]<<endl;}
amount = amount-(ans)*a[i];
}


cm++;
}
c++;
}
return 0;
}

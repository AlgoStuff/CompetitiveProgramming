#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
unsigned long long int a,b;
int t;
cin>>t;
unsigned long long int ar[10];
unsigned long long int sum = 0;
for(int i = 1;i<=10;i++){
ar[i] = (((pow(10,i))-1)*(pow(10,i)))/2 - sum;
sum += ar[i];
}
while(t--){
cin>>a>>b;
int al = 0;
int bl = 0;
unsigned long long int an = a;
unsigned long long int bn = b;
while(an>0){
an=an/10;
al++;
}
while(bn>0){
bn=bn/10;
bl++;
}

unsigned long long int res = 0;
for(int i = al+1; i < bl ; i++){
res = res+ar[i]*i;
}
if(al==bl){
long long int n = b-a+1;
cout<<(((b-a+1)*a + (n*(n-1))/2)*al)%1000000007<<endl;
}
else{
res+= ((((pow(10,al))-1)*(pow(10,al))/2- a*(a-1)/2)*al);
res+= ((b*(b+1)/2 - (pow(10,bl-1)*(pow(10,bl-1)-1)/2))*bl);
cout<<res%1000000007<<endl;}
}
return 0;
}

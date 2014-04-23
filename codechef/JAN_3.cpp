#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;

struct info{
long int s;
long int f;
long int p;
};
bool compare(info x,info y){
if(x.p < y.p) return true;
else if(x.p == y.p){
return x.f < y.f;
}
else return false;
}

int main(){
int t;
cin>>t;
while(t--){
long int n;
long int k;
scanf("%ld %ld",&n,&k);
info a[100001];
for(int i = 0 ; i < n ; i++){
scanf("%ld %ld %ld",&a[i].s,&a[i].f,&a[i].p);
}

sort(a,a+n,compare);
long int finish = a[0].f;
long int curr = a[0].p;
long int count = 1;



for(int i = 0; i < n;i++){

if(a[i].p != curr){
count++;
finish = a[i].f;
curr = a[i].p;
}
if(finish <= a[i].s){
count++;
finish = a[i].f;
}
}
if( n == 0) printf("0\n");
else
printf("%ld\n",count);
}
return 0;
}

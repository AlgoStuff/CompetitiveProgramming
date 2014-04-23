#include<iostream>

using namespace std;

int gcd(int a, int b){
while(a!=b){
if(a>b)a=a-b;
else b = b-a;
}
return a;
}

int main(){

int t;
cin>>t;
while(t--){
int n;
long long int rcut,mins,minrf,s,rf;
cin>>n>>mins>>minrf;
int res = 0;
while(n--){
cin>>s>>rf;
if(s>mins || rf > minrf) res++;
}
cin>>rcut;
int g = gcd(res,rcut);
cout<<(res/g)<<"/"<<(rcut/g)<<endl;
}

return 0;
}

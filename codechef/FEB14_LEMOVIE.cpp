#include<iostream>
#include<algorithm>

using namespace std;
int a[200] = {0};
int pr[200];
int uniq = 0;
long long int fact(int a){
long long int res  = 1;
while(a){
res = res*a;
a--;
}
return res;
}
long long int ncr(int a, int b) {return fact(a)/(fact(b)*fact(a-b));} 	

long long int solve(int n,int p){
cout<<"Now at "<<n<<" "<<p<<endl;
long long int ret;
if(p > n) {if (uniq) ret =  0; else ret = 1;} 
if(p == 1) ret = a[pr[n]]*fact(n-1);
else {ret =  ncr(n-1,p-1)*fact(n-p-a[pr[n]]+1)*solve(n-1,p-1);}

cout<<"Here return is "<< ret<<endl;
return ret;
}

int main(){
int t;
int n,k;
cin>>t; 	
while(t--){
uniq = 0;
for(int i= 0 ; i <= 200;i++) a[i] = 0;
cin>>n>>k;
for(int i = 1; i <= n;i++){
cin>>pr[i];
a[pr[i]]++;
if(a[pr[i]] >  1) uniq = 1;
}
sort(pr+1,pr+n+1);

long long int res = 0;
for(int i = 1 ; i <= k; i++){
res+= solve(n,i);
}
cout<<res<<endl;
}
return 0;
}

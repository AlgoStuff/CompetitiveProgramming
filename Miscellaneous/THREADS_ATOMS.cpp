#include<iostream>
#include<cstdio>
#include<cmath>
typedef  long long int ul;

using namespace std;

int main(){
ul t,n,m,k;
scanf("%lld",&t);
while(t--){
scanf("%lld %lld %lld",&n,&k,&m);
ul p = m/n + m%n;
printf("%d\n",log(p)/log(k));

}
return 0;
}

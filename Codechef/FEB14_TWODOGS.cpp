#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
typedef long long int lli;
typedef long int li ;
li max(li a,li b){
return a > b ? a : b;
}
li min(li a,li b){
return a < b ? a : b;
}
int main(){
li k,buff;
int n,minpos,b[3];

scanf("%d %ld",&n,&k);
int a[1000001] = {0};


for(int i = 1; i <= n; i++){
scanf("%ld",&buff);
if(i <= n/2) minpos = i;
else minpos = n-i+1;
if(a[buff] == 0) a[buff] = minpos;
else a[buff] = min(a[buff],minpos);
}


li res = 100000000;

for(int i = 1; i <= k/2; i++){
if(a[i] != 0 && a[k-i] != 0 && i != k-i && res > max(a[i],a[k-i])){
res = max(a[i],a[k-i]);
}
}
if(res == 100000000)
printf("-1\n");
else
printf("%ld\n",res);
}

#include<iostream>
#include<ctime>
#include<fstream>
#include<string.h>
#include<sstream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<iomanip>
using namespace std;
typedef long long int ll;

int main()
{
ll MAX1,MAX2,n,t,c,k;
cin>>t;
while(t--){
cin>>n;
cin>>k;
ll sum = 0,ksum=0,a[n];
for(int i = 0 ; i < n ; i++) {cin>>a[i];}
sort(a,a+n);

for(int i  = 0 ;i < k; i ++){ksum = ksum+a[i];}
for(int i  = k ;i < n; i ++){sum = sum+a[i];}
if(sum > ksum)
MAX1= sum-ksum;
else MAX1 = ksum-sum;
k = n - k;
ksum =0;
sum = 0;
for(int i  = 0 ;i < k; i ++){ksum = ksum+a[i];}
for(int i  = k ;i < n; i ++){sum = sum+a[i];}
if(sum > ksum)
MAX2= sum-ksum;
else MAX2 = ksum-sum;
if(MAX1>MAX2) cout<<MAX1<<endl;
else cout<<MAX2<<endl;
}
return 0;
}

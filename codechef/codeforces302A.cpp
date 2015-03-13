#include<iostream>
#include<algorithm>
typedef long int l;
using namespace std;
int main()
{
l n,m;
cin>>n;
cin>>m;
l a[n];
for(int i = 1 ; i <=n ; i++) cin>>a[i];
l lft,ryt;

while(m--){
cin>>lft;
cin>>ryt;
l sum;
for(int i = lft; i <=ryt ; i++) sum = sum + a[i];
if(sum == 1) cout<<1<<endl;
else cout<<0<<endl;

}







}

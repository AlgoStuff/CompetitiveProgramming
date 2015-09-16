#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
using namespace std;

vector<long long int> spclnum;
vector<long long int> prnum;
long long int range_prime[1000001];
long long int prime_btn_range(long long int Start,long long int End)	
{
long long int i;
for (i = 0; i <= End-Start; i += 1)
{
range_prime[i]=1;
}
long long int pr_no;
long long int near;
long long int count = End-Start+1;
for (i = 0;i<78498; i += 1)
{
pr_no=prnum[i];
if( pr_no*pr_no > End )
break;
near = (Start / pr_no) * pr_no;
if( near < Start )
{
near = near +pr_no;
}
if(near == pr_no)
{
near += pr_no;
}
for(;near <= End ; near = near+ pr_no)	
{
if(range_prime[near - Start]){
range_prime[near - Start]=0;
count--;
}
}

}

return count;
}
int main(){
bool a[1000001]={0};
int up = sqrt(1000000);
for(int i = 2 ; i <= up ; i++){
if(!a[i]){
int ind = 0;
while(i*i+ind*i<=1000000){
a[i*i+ind*i] = 1;
ind++;
}}}
for(int i = 2 ; i <= 1000000 ; i++){
if(!a[i]) prnum.push_back(i);}
for(int i = 0;i<78498;i++){
for (int p = 1; p<78498;p++)
{
if(pow(prnum[i],prnum[p]-1) <= 1000000000000ULL)
spclnum.push_back(pow(prnum[i],prnum[p]-1));
else{
break;
}}}
long long int size = spclnum.size();
sort(spclnum.begin(),spclnum.end());
int t;
cin>>t;
while(t--){
long int count = 0;
long long int ai,bi;
cin>>ai>>bi;
count = upper_bound (spclnum.begin(), spclnum.end(), bi)-lower_bound (spclnum.begin(), spclnum.end(), ai);
if(ai<2) ai = 2;
cout<<count+prime_btn_range(ai,bi)<<endl;
}
return 0;
}

#include <iostream>
#include <map>
#include <vector>
#include <iomanip>
#include <string.h>
#include <algorithm>
using namespace std;
 
const int MAXN = 10000;
const int MAXK = 10;
typedef long long T;
 
T cumBIT[MAXK][MAXN+10];
T howMany[MAXK][MAXN+10];
vector<int> values;
map<int,int> mapIndex;
T dp[MAXN][MAXK];
void update(int idx, int k, int n, T val)
{
    while(idx<n) {
        cumBIT[k][idx]+=val;
        idx+=(idx&-idx);
    }
}
 
T getValue(int idx, int k)
{
   T ret = 0;
   while(idx>0) {
 
      ret+=cumBIT[k][idx];
 
      idx-=(idx& (-idx));
   }
   return ret;
}
 
T dp_result(vector<int> values, int maxk)
{
   dp[0][1]=1;
   T ret=0;
   for(int i=1;i<values.size();i++) {
     dp[i][1]=1;
     for(int k=2;k<=maxk;k++) {
      for(int j=0;j<i;j++) {
         if(values[j]<values[i]) {
            dp[i][k]+=dp[j][k-1];
         }
      }
     }
     ret+=dp[i][maxk];
   }
   return ret;
}
int main()
{
 
    memset(cumBIT,0,sizeof(cumBIT));
    int n,k;
    cin>>n>>k;
    values=vector<int>(n,0);
    for(int i=0;i<n;i++) {
        cin>>values[i];
    }
    vector<int> temp=values;
 
    sort(values.begin(),values.end());
    mapIndex[values[0]]=1;
    for(int i=1;i<n;i++) {
       if(values[i]!=values[i-1]) {
         mapIndex[values[i]]=i+1;
       }
    }
 
    values=temp;
    T ret = 0;
    for(int i=0;i<n;i++) {
      int index = mapIndex[values[i]];
      howMany[1][i]=1;
      update(index,1,n,howMany[1][i]);
      for(int j=2;j<=k;j++) {
         howMany[j][i]=getValue(index-1,j-1);
         update(index,j,n,howMany[j][i]);
      }
      ret+=howMany[k][i];
    }
 
 
    cout<<ret<<" compare "<< dp_result(temp,k)<<endl;
 
}
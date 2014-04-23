#include<vector>
#include<algorithm>
#include<iostream>
#include<stack>
#include<queue> 
using namespace std;
long long int front[100001];
long long int back[100001];

int maxray(long long int A[],long int n){
long long int maxhere,maxhere1;
long long int maxsofar1,maxsofar;
maxhere = A[0];
maxsofar = maxhere;
maxhere1 = A[n-1];
maxsofar1 = maxhere1;
front[0] =  maxhere;
back[n-1]  =  maxhere1;
long int x = 1;
while(x < n){
maxhere = max(A[x], maxhere + A[x]);
maxsofar = max(maxsofar, maxhere);
front[x] = maxsofar;
maxhere1 = max(A[n-1-x], maxhere1 + A[n-1-x]);
maxsofar1 = max(maxsofar1, maxhere1);    	
back[n-1-x]= maxsofar1; 
x+=1;
}
} 
int main(){
 int t;
 cin>>t;
 while(t--){

 long int n,k;
 cin>>n>>k;
 long long int a[n];
 for(long int i = 0 ; i < n ; i++) cin>>a[i];
 maxray(a,n);
 long long int res = -2000000001;
 for(long int i = 0 ; i < n-k-1;i++){
 res = max(front[i] + back[i+k+1] , res);
 }
 cout<<res<<endl;
 }
 return 0;
 }

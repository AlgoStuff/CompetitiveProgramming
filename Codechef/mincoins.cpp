#include<iostream> 
#include<cstdio>
#include<cmath> 
typedef unsigned long long int ul;
using namespace std; 
int main()
{   

ul t,s,n;
cin>>t;
  while(t--){
  cin>>n;
    ul a[n];
    for(ul i = 0 ; i < n; i++){
    cin>>a[i];
    }
    cin>>s;
    ul min[s];
    for(ul i = 1 ; i <=s; i++){
    min[i] = 2000000000000;
    }
  min[0] = 0;
    for(ul i = 1; i  <= s ; i++)
      for(ul j = 0 ; j < n; j++){
      if(a[j] <= i && min[i-a[j]]+1 < min[i])
			min[i] = min[i-a[j]] +1;    }
  cout<<min[s]<<endl;
  } 
    
} 


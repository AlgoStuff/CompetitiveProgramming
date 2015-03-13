#include<iostream> 
#include<cstdio>
#include<vector>
#include<cmath> 
#define pb push_back
typedef unsigned long long int ul; 
using namespace std; 
int main()
{  
ul n,t,k;
cin>>t;
while(t--){
cin>>n;
bool a[n];
for(int i = 1; i <=n;i++){a[i] = true;}
cin>>k;
ul buff;
for(int i = 1; i <=k; i++){cin>>buff;  a[buff] = false;}
bool check = true;
for(int i = 1; i <=n;i++){
if(check  == true && a[i] == true) {a[i] = false ;check = false; cout<<i<<" ";}
else if (check  == false && a[i] == true){check = true;}

}
cout<<endl;
for(int i = 1; i <=n;i++){
if(a[i] == true) {check = false; cout<<i<<" ";}
}
cout<<endl;
}

}

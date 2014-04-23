#include<iostream>
#include<ctime>
#include<algorithm>
#include<vector>
#include<fstream>
#include<string.h>
using namespace std;
int main(){
int n,m;
cin>>n;
cin>>m;
bool nar[1000];
bool mar[1000];
bool na[1000];
bool ma[1000];
int res = 0;
for(int i = 1 ; i <=n;i++){na[i] = true; nar[i] = true;}
for(int j = 1; j <= m;j++){ma[j] = true; mar[j] = true;}
for(int i = 1 ; i <=n;i++){
for(int j = 1; j <= m;j++){
if(na[i]||ma[j]){
res++;
na[i] = false;
ma[j] = false;
}

}}
cout<<res<<endl;
for(int i = 1 ; i <=n;i++){
for(int j = 1; j <= m;j++){
if(nar[i]||mar[j]){
cout<<i<<" "<<j<<endl;
nar[i] = false;
mar[j] = false;
}

}}

}

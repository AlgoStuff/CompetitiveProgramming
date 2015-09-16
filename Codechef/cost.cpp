#include<iostream>
using namespace std;
typedef long int l;

int main(){
l t,n,c;
cin>>t;
while(t--){

cin>>c;
cin>>n;
bool check[n];
l cost[n];

for(l  i = 1; i <=n ; i++){

cin>>cost[i];
}

for(l i = 1; i <= n;i++){
for (l j = i+1; j <= n;j++){
if(cost[i] + cost[j] == c ) cout<<i<<" "<<j<<endl;

}

}




}
}










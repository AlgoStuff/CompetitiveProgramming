#include<iostream>
using namespace std;
typedef  long long int l;

int main(){
l t;
cin>>t;
while(t--){
l c,n;
cin>>n;
cin>>c;
l a;
for(int i= 1; i <= n;i++ ){ cin>>a;  c = c-a; }
if(c < 0) cout<<"No"<<endl;
else cout<<"Yes"<<endl;
}

return 0;
}

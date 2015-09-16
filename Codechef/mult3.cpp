#include<iostream>
using namespace std;
typedef long int l;
int main(){
l t , n;
l num[100001] = {0};
cin>>n;
cin>>t;
while(t--){
l count = 0;

l q,a,b;
cin>>q;

if(q == 0){

cin>>a;
cin>>b;
for(int i = a; i <=b;i++){
num[i] += 1;
}
}


else {
cin>>a;
cin>>b;
for(int i = a; i <=b;i++){
if(num[i] % 3 ==0) count++;
}
cout<<count<<endl;
}

}







return 0;
}


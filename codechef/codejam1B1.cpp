#include<iostream>
#include<algorithm>
using namespace std;
typedef long int l;
int main(){
l a,n,t,c=0;
cin>>t;
while(t--){
c++;

cin>>a;
cin>>n;

l b[n];
for(l i = 1; i <= n ; i++)
 cin>>b[i];
sort(b+1,b+n+1);
cout<<"Case #"<<c<<": ";
l result = 0;
for(l i = 1; i <=n ; i++){
if(a > b[i]) a = a+ b[i];
else {
if( a == 1) {result = n; break;}
l temp = 0; 

for(l j = 0; a <= b[i];j++) { a =a + a -1; temp = temp+1;} if(temp > n-i) {result = result + n-i+1; break;} else result+=temp;}
} 
cout<<result<<endl;
}



}

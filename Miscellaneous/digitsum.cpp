#include<iostream>
using namespace std;
long int digitsum(long int n){
long int sum = 0;
while(n){
sum = sum + n%10;
n = n/10;
}
return sum;
}

long int sum_to_n(long int n){
if(n<=1) return 0;
else
return (10*sum_to_n(n/10) + 45*(n/10) + (n%10)*digitsum(n/10) + (n%10)*((n%10)-1)/2);
}
int main(){
long int t ,a ,b;
cin>>t;
while(t--){
cin>>a;
cin>>b;
cout<<sum_to_n(b+1) - sum_to_n(a)<<endl;
}




}

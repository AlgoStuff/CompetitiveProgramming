#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long int fib[100] = {0};
int cnt = 2;
void foo(){
fib[1] = 0;
fib[2] = 1;
for(int i = 3; fib[i-1] <= 10000000000 ; i++){
fib[i] = fib[i-1]+fib[i-2];
cnt++;
}
}
int main(){
foo();
int t;
cin>>t;
long long int n;
while(t--){
cin>>n;
if(binary_search(fib,fib+cnt+1,n)) cout<<"IsFibo"<<endl;
else cout<<"IsNotFibo"<<endl;
}
return 0;
}

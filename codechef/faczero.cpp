#include<iostream>
long int fact(int);
using namespace std;
int main(){
long int n,num;
cin>>num;
long int t[num][1];
 
for(int i = 0; i < num ; i++){
cin>>t[i][1];
}
long int c = 0;
while(c<num){
           long int count = 0;
           n = fact(t[c][1]);
           while((n % 10) == 0){
           count++;
           n = n/10;}
cout<<count<<endl;


c++;}

return 0;
}

long int fact(int a){
long int pro = 1;
while(a>0){
 pro = pro * a;
a--;}
return pro;
}

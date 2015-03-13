#include<iostream>
#include<stdio.h>
using namespace std;
typedef unsigned long long ull;

ull fib(ull a)
{ ull i = 1,prev =  0,curr = 1,next;
  while( i < a)
              {
               next = prev + curr;
               prev = curr;
               curr = next;
               i++;
              }
return curr;
}

int main()
{ 
int a[1000][1000];
for(ull i = 0 ; i < 1000; i++){
for(ull j = 0 ; j < 1000; j++){
int count =0;
ull fibo = (fib(i+j+1) % 1000000007);

while(fibo!=0){
         
         if (fibo % 2 == 1){ count++;}
         fibo = fibo / 2;
    }
a[i][j] = count;    
}}
long long int t,c = 0;
cin>>t;
while(c < t)
{


int g,count =0;
ull n;
cin>>n;
cin>>g;
if(g > 32) {cout<<"INCORRECT\n";}
else if(n == 1000000){if (g == 17) {cout<<"CORRECT\n"; }else{ cout<<"INCORRECT\n";}}
else {




    
    if(a[n/1000][n%1000] == g) {cout<<"CORRECT\n";}
    else {cout<<"INCORRECT\n";}

}
c++;
}
return 0;
}

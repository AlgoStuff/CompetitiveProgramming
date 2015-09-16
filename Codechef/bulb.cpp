#include<iostream>
using namespace std;
void remove(int *a,int j);
int main()
{
int t,n,c=0;
int a[10000];
for(int i = 1; i < 10000; i++){a[i] = i;}
int ch = 10000;
for(int i = 2;i < ch;i++){
    int j = i;
    while( j < ch){
         a[j] =0;
          
          j = i+j;
    }
    
    for(int k = 1;k<ch;k++){
    if(a[k] == 0){remove(a,k); ch--;}
    }

}

  cin>>t;
  while(c<t){
  cin>>n;
  int count = 0;
  for(int i = 1; a[i] <= n && i < ch;i++)
  {cout<<a[i]<<" ";} cout<<endl;c++;}
 
 return 0;
 }

void remove(int *a,int j)
{
 
 for(int i = j ; i<10000 ; i++)
{  a[i] = a[i+1]; }
}




#include<iostream>
using namespace std;

void remove(int *a,int j);
int main()
{
int n;
cin>>n;
int a[n],count = 1;
for(int i = 0 ; i < n ; i++){
cin>>a[i];
}
for(int i = 0; i < n ; i++){
     for(int j = i+1 ; j < n ; j++){
        if(a[i] == a[j]){remove(a,j); n--;}}}
for(int i = 0; i <n ; i++){cout<<a[i]<<" ";}

cout<<'\n';
return 0;
}


void remove(int *a,int j)
{
 
 for(int i = j ; a[i+1] != '\0' ; i++)
{  a[i] = a[i+1]; }
}





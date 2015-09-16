#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
long int t,n,j=1;
int *a;
a =(int *) malloc(100000000*sizeof(int));
a[1] = 1;
a[2] = 2;
for(long int i= 1; i < 30000 ; i ++){
long int c = 0;
while(c<a[i]){ a[j] = i;c++;j++;}
}
cin>>t;
long int p = 0;
while (p < t){
cin>>n;
cout<<a[n]<<endl;p++;}
return 0;
}

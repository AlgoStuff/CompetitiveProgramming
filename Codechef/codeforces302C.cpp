#include<iostream>
#include<algorithm>
typedef long int l;
using namespace std;
int main()
{
l n;
cin>>n;
l size = 2*n -1;
l a[size];
l possum = 0;
for(int i = 0; i < size; i++){ cin>>a[i];
}
sort(a,a+size);
bool chk = true;
while(chk){

l pos = 0;
l neg = 0;
for(l i = 0 ; i < n ; i++){
if(a[i] < 0) neg = neg+ a[i]*-1;
else pos = pos + a[i];}

if(neg > pos){
for(l i = 0 ; i < n ; i++){ a[i] = a[i]*-1;}
sort(a,a+size);
}

else chk = false;
}

for(l i = 0 ; i < size ; i++) possum =  possum + a[i];
cout<<possum<<endl;
}

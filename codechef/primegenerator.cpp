#include<iostream>
#include<cmath>
using namespace std;
int main(){
long int n,t,c = 0;

cin>>t;

long int a[t][2];
while(c < t){ cin>>a[c][1];
                 cin>>a[c][2];


c++;}

int count = 0;
while(count<t){
long int b[a[count][2]];
for (long int i = a[count][1]; i <= a[count][2] ; i++)
  {
     b[i] = 1;
}

for(long int i = a[count][1]; i <= sqrt(a[count][2]);i++)
       { if ( b[i] ){ long int k = 0;
                       while(((i*i) +(k*i)) <= a[count][2] ){

                                        b[((i*i) +(k*i))] = 0;
                                          k++;}}}

int check = a[count][1];
while(check <= a[count][2] ){ if (b[check]) {cout<<check<<endl;} check++;}
cout<<endl;
count++;
}

return 0;
}


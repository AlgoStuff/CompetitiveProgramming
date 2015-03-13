#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int t,c=0;
cin>>t;
int ax[19];


while(c<t)
{
for (int i = 0; i <19 ; i++)
  {
      ax[i] = 0;
}
unsigned long long int count = 0;
unsigned long long int start,end;
cin>>start;
cin>>end;

for(unsigned long long int num = start; num < end;num++)
{
if(num > 10){
unsigned long long int divide = num;
int i = 0;
while( divide > 0)
{
  int rem = divide%10;
  ax[i] = rem;
  divide = divide/10;
  i++;
}
}
int s=0,sq=0;
for(int i = 0; i < 19; i++){
 s = s + ax[i];
 sq = sq + (ax[i]*ax[i]);

}
  
  int ans1=1,ans2=1,u = 2;
  while((u<s/2) &&(ans1==1))
{if(s%u==0)
ans1=0;
u++;
}
u = 2;
while((u<sq/2) &&(ans2==1))
{if(sq%u==0)
ans2=0;
u++;
}

  
  

if(ans1 && ans2 && num > 10 ){count++;}

}
cout<<count<<endl;
c++;
}
return 0;
}

#include<stdio.h>
#define X 100000
long long int prime[X];
 int main()
 {long long int num,i,j,k,m,n,t;
   long long int a[X];
  prime[1]=1;
   for(i =2;i*i<X;i++)
    {
      if (prime[i]!=1)
       {
        for(j =2;j*i<X;j++)
         {
          prime[i*j]=1;
         }
        }
    }
    for(i=0,j=1;i*10<X;j++)
     {
         if (prime[j]==0)
         {
             a[i]=j;
             i=i+1;
         }
     }
    
 
  scanf("%lld",&t);
 
while(t--)
{
 scanf("%lld%lld",&m,&n);
 num=m;
if(num<=2)
{num=3;
printf("2\n");}
while(num<=n)
 {
 if(num%2!=0)
   {
 
 
     int flag=0;
 
 
   for(i=0;a[i]*a[i]<=num;i++)
    {
      if(num%a[i]==0)
       {flag=1;
         break;}
 
 
 
    }
    if(flag==0)
    {printf("%lld\n",num);
    }
   }
    num=num+1;
 
    }
}
  return 0;
}
 

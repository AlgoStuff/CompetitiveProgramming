#include<stdio.h>
int main()
{
	int t;
scanf("%d",&t);	
while(t--)
{int i,c;
int num,a[10000]={0};
scanf("%d",&num);
num--;
int k=1;
a[0]=1;
while(num)
{
c=0;
for(i=0;i<k;i++)
{
a[i]=a[i]*2+c;
if(a[i]>=10 && k-1==i)
	{
	a[i+1]=a[i+1]+a[i]/10;
	a[i]=a[i]%10;
	k++;
	break;
	}
else if (a[i]>=10)	
	{
	c=a[i]/10;
	a[i]=a[i]%10;
	}
else 
 c=0;
}
num--;
}
for(i=k-1;i>=0;i--)
	printf("%d",a[i]);
printf("\n");	
}
return 0;
}	
	
	

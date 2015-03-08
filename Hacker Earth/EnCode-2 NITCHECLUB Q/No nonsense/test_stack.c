#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int i,j,a,b;
   time_t t;
   a=1;
   int cnt_1=0;
   int cnt_2=0;
   FILE *fp;
   fp=fopen("in7.txt","a+");
fprintf(fp,"70000000\n");
if(a==1)
{
	cnt_1++;
	srand((unsigned) time(&t));
   	fprintf(fp,"%d %d\n",a, rand() % 10000);
}
j=0;
int temp=0;
while(j<69999999)
{	 
 	a=(rand()%3)+1;
	
	if(a==1)
	{	
		cnt_1++;
		fprintf(fp,"%d %d\n",a,rand()%10000);	
		j++;
		temp=a;
	}
	else if(a==2)
	{
		cnt_2++;
		if(cnt_2<cnt_1)
		{	fprintf(fp,"%d\n",a);
			j++;
			temp=a;
		}
	}else if(a==3)
	{	
		if(temp!=a)
		{	fprintf(fp,"%d\n",a);
			j++;
			temp=a;
		}
	}
}
return(0);
}

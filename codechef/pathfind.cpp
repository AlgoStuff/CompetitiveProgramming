#include<iostream>
#include<stdio.h>
static long long int array[60][60];
using namespace std;
int i,j; 
void pascal()
{
	array[1][0]=1;
	array[1][1]=1;
	for(i=2;i<=51;++i)
	{
		for(j=0;j<=51;++j)
		{
			if(j==0)
			{
				array[i][j]=1;
			}
			else if(j==i)
			{
				array[i][j]=1;
				break;
			}
			else
			{
				array[i][j]=array[i-1][j]+array[i-1][j-1];
			}
		}
	}
}
int main()
{
	long long int l,n,m,x,c,v,b,p,q,r,test;
	long long int ans;
	pascal();
	cin>>test;
	
	while(test--)
	{
		cin>>n>>m;
	    cin>>v>>b;
		if(n==v||m==b)
		{
			cout<<"0";
		}
		else
		{
			x=n-v+1;
			c=m-b+1;
			p=array[n+m-2][n-1];
			q=array[v+b-2][v-1];
			r=array[x+c-2][x-1];
			ans=p-q*r;
			cout<<ans;
        }
    cout<<endl;
    }
return 0;
}
 

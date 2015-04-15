#include<bits/stdc++.h>
using namespace std;
int val[105][105][105];//[n][e][t]
int main()
{
	int n,t[105],e[105],d[105],E,T,i,j,k,total;
	cin>>n>>E>>T;
	for(i=1;i<=n;i++) cin>>e[i];
	for(i=1;i<=n;i++) cin>>t[i];
	total=0;
	for(i=1;i<=n;i++) {cin>>d[i];total+=d[i];}

	for(j=0;j<=E;j++)
	for(k=0;k<=T;k++)
	val[0][j][k]=0;
	
	for(i=1;i<=n;i++)
	for(j=0;j<=E;j++)
	for(k=0;k<=T;k++)
	{
		if(e[i]>j || t[i]>k) val[i][j][k]=val[i-1][j][k];
		else val[i][j][k]=max(val[i-1][j][k],val[i-1][j-e[i]][k-t[i]]+d[i]);
	}
	/*
	for(k=0;k<=T;k++)
	{
		cout<<endl<<endl;
		for(i=1;i<=n;i++)
		{
			cout<<endl;
			for(j=0;j<=E;j++) cout<<val[i][j][k];
		}
	}
	*/
	cout<<total-val[n][E][T]<<endl;
}
		

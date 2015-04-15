#include<bits/stdc++.h>
using namespace std;
void run(int e,int t,int d,int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		int temp=(rand()%e)+1;
		cout<<temp<<' ';
	}
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		int temp=(rand()%t)+1;
		cout<<temp<<' ';
	}
	cout<<endl;
	
	for(i=0;i<n;i++)
	{
		int temp=(rand()%d)+1;
		cout<<temp<<' ';
	}
	cout<<endl;
}

int main()
{
	int n,E,T,erange,trange,drange;
	cin>>n>>E>>T>>erange>>trange>>drange;
	cout<<n<<' '<<E<<' '<<T<<endl;
	run(erange,trange,drange,n);
}

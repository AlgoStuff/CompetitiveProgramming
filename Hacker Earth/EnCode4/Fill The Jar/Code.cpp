#include<bits/stdc++.h>
using namespace std;
struct point
{
	int jar[5];
}temp;
vector <point> stak;
bool dyn[10][10][10][10][10];
int steps[50],stepcount,maxstepcount;
int n,s[5];

bool visited(point p)
{
	if(dyn[p.jar[0]][p.jar[1]][p.jar[2]][p.jar[3]][p.jar[4]]==1) return 1;
	dyn[p.jar[0]][p.jar[1]][p.jar[2]][p.jar[3]][p.jar[4]]=1;
	return 0;
}

bool checksum(point p,int iter)
{
	for(int i=0;i<32;i++)
	{
		int sum=0;
		if(i&1) sum+=p.jar[0];
		if(i&2) sum+=p.jar[1];
		if(i&4) sum+=p.jar[2];
		if(i&8) sum+=p.jar[3];
		if(i&16) sum+=p.jar[4];
		if(steps[sum]==-1) {steps[sum]=iter;stepcount++;if(stepcount==maxstepcount) return 1;}
	}
	return 0;
}
		
		
void run(int iter)
{
	point p;
	int siz=stak.size();
	bool flag=0;
	int i,j,k;
	for(k=0;k<siz;k++)
	{
		p=stak[k];
		//cout<<"From "<<p.jar[0]<<p.jar[1]<<p.jar[2]<<p.jar[3]<<p.jar[4] <<" to\n"; 
		//cin>>i;
		//filling
		point p2;
		for(i=0;i<n;i++)
		{
			p2=p;
			p2.jar[i]=s[i];
			if(visited(p2)) continue;
			//cout<<p2.jar[0]<<p2.jar[1]<<p2.jar[2]<<p2.jar[3]<<p2.jar[4]<<endl;
			flag=1;
			if(checksum(p2,iter)) return;
			stak.push_back(p2);
		}
		
		//emptying
		for(i=0;i<n;i++)
		{
			p2=p;
			p2.jar[i]=0;
			if(visited(p2)) continue;
			//cout<<p2.jar[0]<<p2.jar[1]<<p2.jar[2]<<p2.jar[3]<<p2.jar[4]<<endl;
			flag=1;
			//emptying a jar never creates new combinations for sum
			stak.push_back(p2);
		}
		
		//transferring within jars
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(i==j) continue;
			p2=p;
			int fr=p2.jar[i];
			int to=p2.jar[j];
			int trans=min((s[j]-p.jar[j]),p2.jar[i]);
			fr-=trans;
			to+=trans;
			p2.jar[i]=fr;
			p2.jar[j]=to;
			if(visited(p2)) continue;
			//cout<<p2.jar[0]<<p2.jar[1]<<p2.jar[2]<<p2.jar[3]<<p2.jar[4]<<endl;
			flag=1;
			if(checksum(p2,iter)) return;
			stak.push_back(p2);
		}
	}
	if(flag==0) return;
	stak.erase(stak.begin(),stak.begin()+siz);
	run(iter+1);
}

int main()
{
	int i,j,k,l,m;
	cin>>n;
	stepcount=0;maxstepcount=0;
	for(i=0;i<n;i++) {cin>>s[i];maxstepcount+=s[i];}
	steps[0]=0;
	for(i=1;i<50;i++) steps[i]=-1;
	
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	for(k=0;k<10;k++)
	for(l=0;l<10;l++)
	for(m=0;m<10;m++)
	dyn[i][j][k][l][m]=0;
	dyn[0][0][0][0][0]=1;
	
	point temp;
	temp.jar[0]=temp.jar[1]=temp.jar[2]=temp.jar[3]=temp.jar[4]=0;
	stak.push_back(temp);
	
	run(1);
	for(i=1;i<=maxstepcount;i++) cout<<steps[i]<<' ';cout<<endl;
}

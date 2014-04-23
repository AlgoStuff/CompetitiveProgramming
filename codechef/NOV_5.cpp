#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<iomanip>
#include<cstdio>

using namespace std;


vector< vector<long int> > Adjlist(100001);
long int parent_of[100001];
long int gangster[100001];
double ans;
double tot;

void dfs(long int k,double res){
		for(vector<long int>::iterator it = Adjlist[k].begin(); it != Adjlist[k].end(); ++it){
			if(gangster[parent_of[*it]] != gangster[*it]){
			ans += res+1;
			dfs(*it,res+1);
				tot++;
			}
			else{
			ans += res;
			dfs(*it,res);
				tot++;
			}	
			}}
			
int main(){
int t;
long int n,q,c,pt,ch,qe;
char qc;
scanf("%d",&t);
while(t--){
cin>>n;
long long int g = n; 
c = 0;
parent_of[0] = 0;
while(c<n-1){
scanf("%ld %ld",&pt,&ch);
gangster[pt] = pt;
gangster[ch] = ch;
Adjlist[pt].push_back(ch);
parent_of[ch] = pt;
c++;
}
cin>>q;
while(q--){
cin>>qc>>qe;
if(qc == 'q'){
ans = 0;
tot = 0;
dfs(qe,0);
long int ans2 = 0;
while(parent_of[qe] != qe){
if(gangster[parent_of[qe]] != gangster[qe])
ans2++;
qe = parent_of[qe];
}
printf("%lf\n",double((ans+ans2+ans2*tot)/(tot+1)));
}
else{
gangster[0] = g;
while(parent_of[qe] != qe){
gangster[qe] = g;
qe = parent_of[qe];
}
g++;
}
}
}
return 0;
}

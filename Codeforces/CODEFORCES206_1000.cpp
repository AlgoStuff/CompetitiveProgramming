#include<iosttream>
#include<algorithm>
using namespace std;
int main(){
int st[1001][1001];
int c1,c2,c3,c4,n,m;
cin>>c1>>c2>>c3>>c4;
cin>>n>>m;
int bus[n+1];
int trol[m+1];
for(int i = 1; i <= n;i++){
cin>>bus[i];}
for(int i = 1; i <= m;i++){
cin>>trol[i];
}
for(int i = 1; i <= n;i++){
st[i][1] = min(c4,min(c1*bus[i],min(c2,
}

return 0;
}
	

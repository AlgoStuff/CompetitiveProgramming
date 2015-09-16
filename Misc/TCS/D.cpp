#include<iostream>
#include<string.h>
using namespace std;
int count = 0;
int map[351][351];
int rats[351][351];
int visited[351][351];
int n, r;
bool validate(int xc,int yc){
	if(xc>=1 && xc <= n && yc >= 1 && yc <= n) return true;
	return false;
}
void foo(int xc,int yc){
	visited[xc][yc] = 1;
	if(rats[xc][yc] == 1 && map[xc][yc] == 1) count++;
	if(map[xc][yc] == 0) return;
	if(validate(xc+1,yc) && visited[xc+1][yc] == 0) foo(xc+1,yc);
	if(validate(xc-1,yc) && visited[xc-1][yc] == 0) foo(xc-1,yc);
	if(validate(xc,yc+1) && visited[xc][yc+1] == 0) foo(xc,yc+1);
	if(validate(xc,yc-1) && visited[xc][yc-1] == 0) foo(xc,yc-1);
	return;
}
int main(){
	
	cin>>n;
	for(int i = 1; i <= n;i++){
		for(int j = 1; j <= n;j++){
			char c;
			cin>>c;
			if(c == 'X') map[i][j] = 0;
			else map[i][j] = 1;
		}
	}
	memset(rats,0,sizeof(rats[0][0])*n*n);
	memset(visited,0,sizeof(visited[0][0])*n*n);
	cin>>r;
	int rcache = r;
	int xc,yc;

	while(r--){
		cin>>xc>>yc;
		rats[xc][yc] = 1;
	}
	foo(xc,yc);
	if(count == rcache) cout<<"Yes";
	else cout<<"No";
}
#include<iostream>
#include<string.h>

using namespace std;
string l[1000];
int adj[100][100];
int m,n;


int main(){

cin>>n;
cin>>m;

for(int i = 1; i <= n ; i++){ 
for(int j = 1; j <= n ; j++){
cin>>adj[i][j];
l[i] = "WHITE";

}
}

for(int i = 1; i <= n ; i++){
l[i] = "GREY"; 
for(int j = 1; j <= n ; j++){
		if(adj[i][j] == 1){
		if(l[j] == "WHITE")
		  adj[i][j] = 0;
		  divist(i);
		  adj[i][j] 
		}






return 0;
}

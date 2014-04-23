#include<iostream>
using namespace std;
char input[m][n];
int path(int r, int c){





}
int main() {
int m , n;
while (true){
cin>>m;
cin>>n;
for(int i = 1; i <= m ; i++)for(int j = 1 ; j <= n ; j++)cin>>input[i][j];
int max = 0;
for(int i = 1; i <= m ; i++)for(int j = 1 ; j <= n ; j++) if (input[i][j] == 97){ int dis = path(i,j);  if(dis>max) max = dis; }
cout<<dis<<endl;
}


}

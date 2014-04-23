#include<iostream>
#include<string.h>
using namespace std;

bool check(int pos,string q, char mat[100][]){
if(pos < q.length()){



}
}
int main(){
int m,n,l;
cin>>m>>n;
char mat[m][n];
string q;
for(int i = 0; i < m ; i++){
for(int j = 0 ; j < n;j++){
cin>>mat[i][j];
}
}
cin>>l;
while(l--){
int pos = 0;
cin>>q;
if(check(pos,q,mat)) {cout<<q<<endl; break;}
}
return 0;
}

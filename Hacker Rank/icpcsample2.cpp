#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
    int a[21][21];
        int n,m;
int  check(int r, int c , bool ch){
if(r>=0 && c <= m-1){
if(ch){
return check(r+1,c+1,false) + check(r,c+1,false) + check(r+1,c,false) + check(r-1,c+1,false) + check(r+1,c-1,false) + check(r,c-1,false) + check(r-1,c,false) + check(r-1,c-1,false);
}
else{
if(a[r][c] == 70) return 1;
else return 0;
}
}
return 0;
}

int main() {
    int t;

    cin>>t;
   loop:
    while(t--){
    cin>>n>>m;

    char p;
    for(int i = 0 ; i< n ; i++){
    for(int j = 0; j< m ; j++){
    cin>>p;
    if(p!='F'){a[i][j] = p-48;}
    else a[i][j] = p;
    }
    }
    for(int i = 0 ; i< n ; i++){
    for(int j = 0; j< m ; j++){
    if(a[i][j] != check(i,j,true) && a[i][j] != 70){
    cout<<"Please sweep the mine again!"<<endl; goto loop;}
    }
    }
    cout<<"Well done Clark!"<<endl;
    }
    return 0;
}


#include<iostream>
#include<algorithm>
using namespace std;
	int a[8][8];
	
void game11(int x, int y){
	if(a[x][y] == 0){
		cout<<y<<" "<<x<<endl;
	}
	else if ( x+1 < 8 && y+1 <8 && ( a[x+1][y+1] == 1 || a[x+1][y+1] == 0 )){
		game11(x+1,y+1);
	}
	else if(x+1<8 && ( a[x+1][y] == 1 || a[x+1][y] == 0 )) {
		game11(x+1,y);
	}
	else if(y+1<8 && ( a[x][y+1] == 1 || a[x][y+1] == 0 )){
		game11(x,y+1);
	}
	else if ( x+1 < 8 && y+1 <8 && ( a[x+1][y+1] == 2 )){
		a[x][y] =2;
		game11(0,0);
	}
	else if(x+1<8 && ( a[x+1][y] == 2)) {
		a[x][y] = 2;
		game11(0,0);
	}
	else if(y+1<8 && (a[x][y+1] == 2)){
		a[x][y] = 2;
		game11(0,0);
	}
	
}
void game1(int x, int y){
	if(a[x][y] == 0){
		cout<<y<<" "<<x<<endl;
	}
	else if(y+1<8 && ( a[x][y+1] == 2 || a[x][y+1] == 0 )){
		game1(x,y+1);
	}
	
	else if(x-1>=0 && ( a[x-1][y] == 2 || a[x-1][y] == 0 )) {
		game1(x-1,y);
	}
	else if ( x-1 >= 0 && y+1 < 8 && ( a[x-1][y+1] == 2 || a[x-1][y+1] == 0 )){
		game1(x-1,y+1);
	}
	
	
	else if ( x-1 >=0 && y+1 <8 && ( a[x-1][y+1] == 1 )){
		a[x][y] =1;
		game1(0,0);
	}
	else if(x-1>=0 && ( a[x-1][y] == 1)) {
		a[x][y] = 1;
		game1(0,0);
	}
	else if(y+1<8 && (a[x][y+1] == 1)){
		a[x][y] = 1;
		game1(0,0);
	}
	
}		
int main(){

	for(int i = 0; i < 8 ; i++){
		for(int j = 0 ; j< 8 ; j++){
			cin>>a[i][j];
		}
	}
	int me;
	cin>>me;
	if(me == 1){
		game11(0,0);
	}
	else game1(7,0);
return 0;
}



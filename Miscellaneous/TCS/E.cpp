#include<iostream>
#include<string.h>
using namespace std;
struct node
{
	node* parent;
	int count;
};
int main(){
	node* nx[1000001];
	cin>>n;
	memset(nx,NULL,sizeof(nx));
	int res = 0;
	while(true){
		char c;
		int xc,yc;
		cin>>c;
		if(c == '-'){
			cout<<res<<endl;
			return 0;
		}
		cin>>xc>>yc;
		if(nx[xc] != NULL){
		node* temp = new node();
		temp->parent = temp;
		temp->count
		nx[xc] = temp
		}
	}
	return 0;
}

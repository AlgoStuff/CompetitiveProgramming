#include<iostream>
#include<algorithm>
#include<cmath>
#include<string.h>
#include<queue>
#include<utility>
using namespace std;
struct Node{
int Value;
bool visited;
Node * Next;
};
int main(){

int n , e;
cin>>n;
Node Nodes[n];
for(int i = 0 ; i < n ; i ++){
Nodes[i].Value = i;
Nodes[i].visited = false;
Nodes[i].Next = NULL;
} 
cin>>e;
int n1,n2;
while(e--){
cin>>n1;
cin>>n2;
if(n1!=n2)
Nodes[n1].Next = &Nodes[n2];
}

for(int i = 0 ; i < n ; i++){
Node *Temp = new Node;
Temp = &Nodes[i];
while(Temp){
if(Temp->visited) {cout<<"YES"<<endl; return 0;}
else{
Temp->visited = true;
Temp = Temp->Next;
}
}
for(int i = 0 ; i < n ; i ++){Nodes[i].visited = false;}
}
cout<<"NO"<<endl;
return 0;
}

#include<iostream>
#include<string.h>
using namespace std;
struct Node{
int Value;
bool visited = false;
Node *Next;
};
class LinkedList{
public:
	Node *Front;
	Node *Rear;
	LinkedList();
	void Insert(int );
};
LinkedList::LinkedList(){
Front = NULL;
Rear = NULL;
}
LinkedList::Insert(int Data1,int Data2){
Node *Temp = new Node;
Temp->Value = Data1;
Temp->Next = NULL;
if(L[Data2]->Rear == NULL){
L[Data2]->Front = Temp;
L[Data2]->Rear = Temp;
}
else{
L[Data2]->Rear->Next = Temp;
L[Data2]->Rear = L[Data2]->Rear->Next;
}
}
int main(){
long int e,v,res=1,t1=0,t2=0;
cin>>v;
LinkedList L[v];

cin>>e;
t1 = e;
while(t1--){
long int n1,n2;
cin>>n1;
cin>>n2;
L[n1].Insert(n2);
L[n2].Insert(n1);
}

for(int i = 0 ; i < v ; i++){
if(!L[i].visited)

}
return 0;
}

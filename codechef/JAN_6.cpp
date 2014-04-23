#include<iostream>

using namespace std;

class node{
public:
	unsigned long long int data;
	node *next;
	node *prev;
};
node * insert(node *last,unsigned long long int data){
node *Temp = new node;
Temp->next = NULL;
Temp->prev = last;
Temp->data = data;
last->next=Temp;
return Temp;
}

int main(){
node *last = new node;
node *head = new node;
last->next = NULL;
last->prev = NULL;
head->prev = NULL;
int t,n,p;
cin>>t;
while(t--){
unsigned long long int buff,A,B,C,sum = 0 , pro = 1;
unsigned long long int a[1000];
unsigned long long int add[1000];
unsigned long long int mul[1000];
int as,bs;
	cin>>n;
	p = n;
	while(p--){	
		cin>>buff;
		last=insert(last,buff);
		if(p==n-1) {head = last;
					head->prev = NULL;}
	}

string s;
cin>>A>>B>>C;
cin>>s;
unsigned long long int res = 0,pres =1;
for(int i = 0;i<n;i++){
if(s[i] == 'M'){
	res = ((res%C)*(B%C))%C;
	pres = ((pres%C)*(B%C))%C;
	add[i] = res;
	mul[i] = pres;
}
else if(s[i] == 'A'){
	res = ((res%C)+(A%C))%C;
	add[i] = res;
	mul[i] = pres;
}
else{
	add[i] = res;
	mul[i] = pres;
}
}
string point = "FRONT";
node * curr = new node;
curr = head;
for(int i = 0 ; i < n ; i++){

	if(s[i]=='R'){
		if(point == "FRONT"){
			point = "BACK";
			curr=last;
			a[i]=curr->data;
			curr = curr->prev;
			last = last->prev;
		}
		else{
			point="FRONT";
			curr = head;
			a[i] = curr->data;
			head = head->next;
			curr = curr->next;
		}
	}
	else{
		if(point == "BACK"){
			a[i]=curr->data;
			curr = curr->prev;
			last = last->prev;
		}
		else{
			a[i] = curr->data;
			head = head->next;
			curr = curr->next;
		}
	}
	
}
for(int i = 0; i < n ; i++){
cout<<(((a[i]%C)*(mul[i])%C)%C + add[i])%C<<" ";
}
cout<<endl;

}
return 0;

}

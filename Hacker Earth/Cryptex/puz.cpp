
#include <iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while (t--){
   	string s;
   	cin>>s;
   	char hash[26];
   	for(int i= 0; i < 26;i++){
   		hash[i] = 97+i;
   	}
   	int key[1000]={0};
   	int l = s.length();
   	for(int i = 0; i < l;i++){
   		key[i] = s[i]+i-97;
   		
   		if(key[i]>=26) key[i] = key[i]%26;
   		//cout<<key[i]<<" ";
   	}
   	//cout<<endl;
   	for(int i = 0; i < l;i++){
   		cout<<hash[key[i]];
   	}
   	cout<<endl;
   }
    return 0;
}

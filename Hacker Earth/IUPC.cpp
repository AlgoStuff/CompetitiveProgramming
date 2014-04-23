#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    start:
    while(t--){
    	string s;
    	cin>>s;
    	if(s[0] != 'R'){
    		cout<<"NO"<<endl;
    		continue;
    	}
    	int l = s.length();
    	for(int i = 1 ; i < l ; i++){
    		if(s[i] == 'Y'){
    			if(i>1){
    				if( !(s[i-1] == 'R' || s[i-2] == 'R')){
    					cout<<"NO"<<endl;
    					goto start;
    				}
    			}
    		}
    		else if ( s[i] != 'R') {cout<<"NO"<<endl; goto start;}
    	}
    	cout<<"YES"<<endl;
    }
}


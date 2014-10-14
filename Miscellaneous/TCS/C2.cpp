/***********************************************************************/
//  																		
//	INFINITUM 					                                    	
//	Rakesh Mahadasa														
//	National Institute of Technology , Calicut						
//	problem link : None
//	Concept : Hashing
//	Reference : None
//																		
/***********************************************************************/


#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
#include<cstdio>
using namespace std;
bool kmp(string sm,string s){
	int len_s = s.length();
	for(int i = 0 ; i < len_s;i++){
		if(s[i] != sm[i]) return false;
	}
	return true;
}
int main(){
	vector< pair < string , int > > v;
	while(true){
		
		char c;
		cin>>c;
		if(c == '-') return 0;
		if(c == 'A'){
			string id;
			int age;
			cin>>id;
			cin>>age;
			v.push_back(make_pair(id,age));
		}
		if(c == 'Q'){
			int count = 0;
			int type;
			cin>>type;

			if(type == 1){
				bool found = false;
				string s;
				cin>>s;
				int v_size = v.size();
				for(int i = 0 ; i < v_size;i++){
					if(s == v[i].first){
						found = true;
						break;
					}
				}
				if(found) cout<<"True"<<endl;
				else cout<<"False"<<endl;
			}
			if(type == 2){
				string s;
				cin>>s;
				int v_size = v.size();
				for(int i = 0 ; i < v_size;i++){
					if(kmp(v[i].first,s)){
						count++;
					}
				}
				cout<<count<<endl;
			}
			if(type == 3){
				string s;
				int l_age,u_age;
				cin>>s>>l_age>>u_age;
				int v_size = v.size();
				for(int i = 0 ; i < v_size;i++){
					if(kmp(v[i].first,s) && v[i].second > l_age && v[i].second < u_age){
						count++;
					}
				}
				cout<<count<<endl;
			}
		}
	}
	return 0;
}
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
using namespace std;
bool compare(pair<int , int> a, pair<int , int> b){
	int max_a = max(a.first,a.second);
	int max_b = max(b.first,b.second);
	if(max_a < max_b) return true;
	return false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector< std::vector< pair<int , int > > > v(27);
		for(int i = 1;i<=n;i++){
			for(int j = 1; j <= n;j++){
				char c;
				cin>>c;
				v[c-97].push_back(make_pair(i,j));
			}
		}
		for(int i = 0; i < 26;i++){
			int cors_size = v[i].size();
		sort(v[i].begin(),v[i].begin()+cors_size,compare);
		}
		std::vector<unsigned int> vv(27);
		
		int z;
		cin>>z;
		while(z--){
			for(int i = 0 ; i < 26; i++){
			vv[i] = 0;
		}
			string s;
			cin>>s;
			int len = s.length();
			unsigned int res = 1;
			for(int i = 0; i < len; i++){
				if(vv[s[i]-97] < v[s[i]-97].size()){
					res = max(res,(unsigned)max((unsigned)v[s[i]-97][vv[s[i]-97]].first,(unsigned)v[s[i]-97][vv[s[i]-97]].second));
					vv[s[i]-97]++;
				}
			}
			cout<<res<<" "<<res<<endl;
		}
	}
	return 0;
}
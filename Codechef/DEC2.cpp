#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;
bool compare(pair <int , char> a , pair<int , char> b) {
  if(a.first == b.first) return a.second < b.second;
  else return a.first < b.first;
}
int main(){
cout<<1+(1<<6);
int t;
cin>>t;
while(t--){
string f , c , res ;
cin>>f;
getline(cin,c);
getline(cin,c);
vector < pair < int , char > > keys(27);
for( int i = 1 ; i <= 26 ; i++){
keys[i].first = i*-1;
keys[i].second = i+96;
}
vector < char > cuniq;
long int clen = c.length();
for(int i = 0 ; i < clen ; i++){
if(c[i] >= 65 && c[i] <= 90){
cuniq.push_back(c[i]+22);
if(keys[c[i] - 64].first > 0)
keys[c[i] - 64].first++;
else
keys[c[i] - 64].first = 1;
}
else if ( c[i] >= 97 && c[i] <= 122 ){
cuniq.push_back(c[i]);

if(keys[c[i] - 96].first > 0)
keys[c[i] - 96].first++;
else
keys[c[i] - 96].first = 1;
}
}

int lcuniq = cuniq.size();
sort(keys.begin()+1,keys.end(),compare);
char decypher[27];
for( int i = 1 ; i <= 26 ; i++){
decypher[keys[i].second-96] = f[i-1];
}
for(long int i = 0 ; i < clen ; i++){
if(c[i] >= 65 && c[i] <= 90){
cout<<char(decypher[c[i]-64]-32);
}
else if ( c[i] >= 97 && c[i] <= 122 ){
cout<<decypher[c[i]-96];
}
else{
cout<<c[i];
}
}
cout<<endl;
}
return 0;
}

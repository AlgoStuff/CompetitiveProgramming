#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main(){

long int t,n;
cin>>t;
while(t--){
cin>>n;
static int start[27] , end[27];
string now;
while(n--){cin>>now;
int l = now.length();
start[now[0] - 97]++;
end[now[l-1] - 97]++;
}
int count = 0;
int count1 = 0;

for(int i = 1; i <27;i++){ if(start[i] - end[i] == 0) count++;
else if(abs(start[i] - end[i]) == 1) count1++;}

if(count + count1 == 26) cout<<"Ordering is possible."<<endl;
else cout<<"The door cannot be opened."<<endl;

}

return 0;
}

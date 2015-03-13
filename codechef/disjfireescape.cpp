#include<iostream>
using namespace std;
typedef long int ll;


int main(){
        int t;
        long int f1,f2,n,m;
        cin>>t;
        while(t--){
                cin>>n;
                cin>>m;
                disj l[n];

                for(ll i=1;i<=n;i++){
                        l[i].value=i;
                        l[i].head=i;
                        l[i].rank = 1;
                        
                }
        while(m--){
                cin>>f1;
                cin>>f2;
                if(l[f2].head = l[f2].value){ if(l[f1].head != l[f2].head)n--; 
                l[f2].head=l[f1].head;
                l[f1].rank++;
                }
                else {
                        l[f1].head=l[f2].head; n--;
                }
                
        }
        cout<<n<<endl;}
return 0;}

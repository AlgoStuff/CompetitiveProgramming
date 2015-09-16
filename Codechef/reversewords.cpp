#include<iostream>
#include<stdio.h>
#include<string.h>
#include<fstream>
using namespace std;
int main(){
        long int t,p,c=1;
        cin>>t;
                        string temp;
                        ofstream fout;
                        fout.open("gcj.txt");
        while(t--){
                cin>>p;
                char strs[10000];
                gets(strs);
                fout<<"Case #"<<c<<": ";
                
        temp = "";
                
                long int len = strlen(strs);
                for(int i = len-1;i>=0;i--){
                        if(strs[i] == 32){
                                fout<<temp<<strs[i];
                                temp = "";
                        }
                       else// cout<<strs[i];
                        temp = strs[i]+temp;
                
                }
        
        c++;
       fout<<temp<<endl;}
return 0;
}

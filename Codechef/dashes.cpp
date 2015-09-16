#include<iostream>
#include<string>
using namespace std;
int main(){
        long long int sum,len,i;

        string str;
        
                sum = 0;
                cin>>str;
                len = str.length();
                i =0 ;
                while(i < len){
                        if(str[i] == '6' || str[i] == '9' || str[i] == '0')
                        sum = sum +6;
                        else if(str[i] == '2' || str[i] == '3' || str[i] == '5')
                        sum = sum+5;
                        else if(str[i] == '8')
                        sum = sum+7;
                        else if(str[i] == '1')
                        sum = sum+2;
                        else if(str[i] == '7')
                        sum = sum+3;
                        else if(str[i] == '4')
                        sum = sum+4;
                        i++;
                }
                cout<<sum<<endl;
        
}

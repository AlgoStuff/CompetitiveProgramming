#include<iostream>
#include<string.h>
#include<sstream>
#include<stack>
using namespace std;
int main()
{
        stack<string> expression;
        string inorder,preorder,postorder;
        cout<<"Enter postorder expression : ";
        cin>>postorder;
        cout<<" 1->inorder\n 2->preorder\n";
        cout<<"Enter your choice : ";
        int choice;
        cin>>choice;
        string s;
        int len = postorder.length();
        for(int i = 0; i < len ;i++){
                if(postorder[i] == '^' || postorder[i] == '*' || postorder[i] == '/' || postorder[i] == '-' || postorder[i] == '+' ){
                
                                                stringstream ss;
                string x =  expression.top();

                 expression.pop();
                string y =  expression.top();

                  expression.pop();
                  ss << postorder[i];
                        ss >> s;
                string b1 = "(";
                string b2 = ")";
                if(choice == 1){
                string join = b1+y+s+x+b2;
                expression.push(join);}
                else {
                        string join2 = s+y+x;
                        expression.push(join2);
                }}
                else{
                                stringstream ss;
                        ss << postorder[i];
                        ss >> s;

                        expression.push(s);
                }
        }
        cout<<expression.top()<<endl;
        return 0;
}

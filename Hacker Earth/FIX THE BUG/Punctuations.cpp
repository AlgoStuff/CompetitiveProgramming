#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string line;
    getline(cin, line);
    bool d_quote = false, s_quote = false, end_line = false;
    int len = line.size();
    char prevc = '~';
    string res = "";
    int num = 0;
    bool print_it = false;
    for (int i = 0; i < len; i++)
    {
        
        char c = line.at(i);
        if(res == "" and c == ' ')
        else    
        res = res+c;
        

        switch (c) 
        {
            case '.':
            if(!d_quote){        
                print_it = true;
            }
            break;
            case '!':
            if(!d_quote){                
                print_it = true;
            }
            break;
            case '?': 
            if(!d_quote){                
                print_it = true;
            }
            break;       
            case ',':
            break;
            case '"':
            d_quote = !d_quote;
      }
      if(print_it){
        cout<<res<<endl;
        res="";
        print_it = false;
      }
  }
}

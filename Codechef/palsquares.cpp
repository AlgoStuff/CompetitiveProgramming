#include<iostream>
#include<fstream>

using namespace std;
typedef long int l;

int main(){
ifstream fin;
fin.open("input.txt");
ofstream fout;
fout.open("output.txt");
l t,n=0;
fin>>t;
l pal[1000];
pal[0] = 0;
for(int i = 1; i <=1000;i++){
if(i <4) pal[i] = 1;
else if(i > 3 && i < 9) pal[i] = 2;
else if(i > 8 && i < 121) pal[i] = 3;

else if(i> 120 && i <484) pal[i] = 4;
else if(i > 483 && i <1001) pal[i] = 5;



}

while(t--){
l a;
l b;
fin>>a;
fin>>b;
n++;

fout<<"Case #"<<n<<": ";
fout<<pal[b] - pal[a-1]<<endl;

}




}

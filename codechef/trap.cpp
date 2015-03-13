#include<iostream>
#include<fstream>

using namespace std;
typedef long int l;

int main(){
ifstream fin;
fin.open("input.txt");
ofstream fout;
fout.open("output.txt");
l m,c=0;
fin>>m;
while(m--){
bool crx1 = true,crx2 = true,cro1 = true,cro2 = true,lx1 = true,lx2 = true,lo1 = true,lo2 = true;
c++;

char a[5][5];
for(int i = 1; i <=4 ; i++){
for(int j = 1; j <=4 ; j++){
fin>>a[i][j];

}
}
fout<<"Case #"<<c<<": ";
for(int i = 1; i <=4 ; i++){
if (a[i][i] != 'X' && a[i][i] != 'T') crx1 = false;
if (a[5-i][i] != 'X' && a[5-i][i] != 'T') crx2 = false;
if (a[i][i] != 'O' && a[i][i] != 'T') cro1 = false;
if (a[5-i][i] != 'O' && a[5-i][i] != 'T') cro2 = false;
}

if(crx1 || crx2) { goto end_X;  }
if(cro1 || cro2) { goto end_O;  }

for(int i = 1;i<=4 ; i++){
for(int j = 1; j <=4 ; j++){
if(a[i][j] != 'X' && a[i][j] != 'T') lx1 = false;
if (a[j][i] != 'X' && a[j][i] != 'T') lx2 = false;
if(a[i][j] != 'O' && a[i][j] != 'T') lo1 = false;
if (a[j][i] != 'O' && a[j][i] != 'T') lo2 = false;
}
if(lx1 || lx2) goto end_X;
if(lo1 || lo2) goto end_O;
if(i <= 3){ lx1 = true;lx2 = true;lo1 = true;lo2 = true;}
}

for(int i = 1; i <=4 ; i++){
for(int j = 1; j <=4 ; j++){
if(a[i][j] == '.') goto end_D;

}
}

goto end_Dr;

end_X:
fout<<"X won"<<endl;
goto end;

end_O:
fout<<"O won"<<endl;
goto end;

end_D:
fout<<"Game has not completed"<<endl;
goto end;

end_Dr:
fout<<"Draw"<<endl;
end:;
}



}

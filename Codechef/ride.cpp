/*
ID: rakeshn1
PROG: ride
LANG: C++
*/

#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{

ofstream fout ("ride.out");
ifstream fin ("ride.in");

int c = 0;
char s[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

int pro1 = 1,pro2 = 1;
char s1[6],s2[6];


fin>>s1;

fin>>s2;
int l1 = strlen(s1);
int l2 = strlen(s2);
for (int i = 0; i < l1 ; i++){
   for(int j = 0; j < 26 ; j ++){
             if (s1[i] == s[j]){ pro1 = pro1 *( j+1); 
                                 break;}}}
for (int i = 0; i < l2 ; i++){
   for(int j = 0; j < 26 ; j ++){
             if (s2[i] == s[j]){ pro2 = pro2 * (j+1); 
                                 break;}}}
if((pro1 % 47) == (pro2 % 47))
{fout<<"GO"<<endl;
 }
else fout<<"STAY"<<endl;

return 0;
}

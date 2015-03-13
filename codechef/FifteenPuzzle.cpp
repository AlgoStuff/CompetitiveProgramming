#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
void generate();
int check(int);
void displayarray();
int winner();
void move();
void swap(int ,int,int,int);

int num[4][4];

int main(){
 //  clrscr();
   
   generate();
   displayarray();
   move();
	 
   //getch();
   return 0;
}

int winner(){
   for(int i=0;i<15;i++)
     if(num[i/4][i%4]!=(i+1))
	   return 0;

    return 1;
}

void move(){
   int r=3,c=3;
   while(winner()==0){
     char ch;
     cin>>ch;
	 if(ch=='w' && r!=0){ swap(r,c,r-1,c); r=r-1;}
	 else if(ch=='a' && c!=0){ swap(r,c,r,c-1); c=c-1;}
	 else if(ch=='s' && r!=3){ swap(r,c,r+1,c); r=r+1;}
	 else if(ch=='d' && c!=3){ swap(r,c,r,c+1); c=c+1;}
	 else if(ch=='x') exit(0);
	 displayarray();
	 }
}	 
  	
void generate(){
   int i=0;
   while(i<15){
     int n=rand()%16;
	 if(check(n)==0){
	   num[i/4][i%4]=n;
	   i++;
	 }
   }
   num[3][3]=-1;   
}

int check(int a){
   for(int i=0;i<4;i++)
     for(int j=0;j<4;j++)
	   if(num[i][j]==a || a==0)
	     return 1;
		 
   return 0;	 
}

void displayarray(){
  //clrscr();
  printf("___________________________\n");
  for(int i=0;i<4;i++){
    for(int j=0;j<4;j++)
	  if(num[i][j]!=-1)
	    printf("%6d",num[i][j]);
	  else
	    printf("     ");
	printf("\n");	
    printf("______|______|______|______|\n");
  }
  printf("\n\tw=UP\ta=LEFT\n\ts=DOWN\td=RIGHT\n\tx=EXIT\n");
}

void swap(int rpos,int cpos,int r2pos,int c2pos){
   int tmp=num[rpos][cpos];
   num[rpos][cpos]=num[r2pos][c2pos];
   num[r2pos][c2pos]=tmp;
}

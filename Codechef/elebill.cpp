#include <stdio.h>
 //#include<conio.h>
int josephus(int n, int k)
{
  if (n == 1)
    return 1;
  else
    /* The position returned by josephus(n - 1, k) is adjusted because the
       recursive call josephus(n - 1, k) considers the original position 
       k%n + 1 as position 1 */
    return (josephus(n - 1, k) + k-1) % n + 1;
}
 
// Driver Program to test above function
int main()
{
  
  while(1){
  int n,k=1;
  scanf("%d",&n);
  if ( n == 0) break;
  while(1){
  int p = josephus(n-1,k);
  if(p==12){
  printf("%d\n",k);
  //getch();
  break;}k++;}}
  return 0;
}

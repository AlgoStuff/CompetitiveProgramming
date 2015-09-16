import java.util.*;
class sort{
          void bubblesorts(int[] a,int size)
              {
               boolean check = true;
               while(check) {
             check = false;
             for(int  i= 0; i < size-1;i++){
                 if (a[i] >  a[i+1]) {
                                     int temp = a[i];
                                     a[i] = a[i+1];
                                     a[i+1] = temp;
                                     check = true;
}}}
for( int j = 0; j<size;j++){
System.out.print(a[j] + " ");}}}

public class bubblesort {
   public static void main(String[] args) {
       int size;
       Scanner sc = new Scanner(System.in);
       System.out.print("Enter the size of the array : ");
       size = sc.nextInt();
       int arr[] = new int[size];
       System.out.println("Enter the elements of the array : ");
       for(int i = 0 ; i < size ; i++ ){
       arr[i] = sc.nextInt();}
       System.out.println("------------BUBBLESORT---------------");
       sort s = new sort();
       
       s.bubblesorts(arr,size);
       System.out.println("");
       }}


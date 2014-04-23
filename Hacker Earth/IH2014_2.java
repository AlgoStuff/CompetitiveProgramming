/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
import java.util.HashMap;

class Ideone
{
 public static void main(String[] args)
 {
  Scanner sc = new Scanner(System.in);
  int t = sc.nextInt();
  String gar = sc.nextLine();
  int c = 0;
  while(c<t){
  String b = sc.nextLine();
  String a = sc.nextLine();
  if(foo(a, b)) System.out.println("YES");
  else System.out.println("NO");
 c++;}}

 private static boolean foo(String a, String b)
 {
  if (a.length() < b.length())
   return false;
  int pls = b.length();
  int nls = 0;
  int ols = 0;
  HashMap hashMap = new HashMap();
  for (char ch : b.toCharArray())
  {
   if (hashMap.containsKey(ch))
   {
    hashMap.put(ch, (int)hashMap.get(ch) + 1);
   } else
   {
    hashMap.put(ch, 1);
   }
  }
  for (int i = 0; i < b.length(); ++i)
  {
   char ch = a.charAt(i);
   if (hashMap.containsKey(ch))
   {
    int count = (int)hashMap.get(ch);
    hashMap.put(ch, count - 1);
    if (count == 0)
     nls++;
    else
     pls--;
   } else
   {
    ols--;
   }
  }
  if (pls == 0 && nls == 0
    && ols == 0)
   return true;
  for (int i = b.length(); i < a.length(); ++i)
  {
   char in = a.charAt(i);
   char out = a.charAt(i - b.length());
   if (hashMap.containsKey(out))
   {
    int count =(int)hashMap.get(out);
    hashMap.put(out, count + 1);
    if (count == -1)
     nls--;
    else
     pls++;
   } else
   {
    ols++;
   }
   if (hashMap.containsKey(in))
   {
    int count = (int)hashMap.get(in);
    hashMap.put(in, count - 1);
    if (count == 0)
     nls++;
    else
     pls--;
   } else
   {
    ols--;
   }
   if (pls == 0 && nls == 0
     && ols == 0)
    return true;
  }
  return false;
 }
}


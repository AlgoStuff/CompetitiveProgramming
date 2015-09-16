import sys
def calc(t):
      q=0;
      while(t>0):
            q=q+int(t%10);
            t=t//10
      print(q)
n=list();
s=int(input());
for i in range(s):
    n.append(int(input()));
for p in n:
 m=1;      
 for i in range(p+1):
       if(i==0):
              pass;
       else:
              m=m*i;
 calc(m);

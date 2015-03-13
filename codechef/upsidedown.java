import java.util.c*;
public class upsidedown{
public static void main(String args[]){
int t,c=0;
Scanner sc = new Scanner(System.in);
t = sc.nextInt();
while(c<t){
char s[] = new int[300];
s = sc.nextChar();
boolean p = true;
int l = strlen(s),i=0;
for(;i < l;i++)
{if(s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '7') {System.out.println("NO");p= false; break;} }
if( p) {cout<<"YES"<<endl; for(int j = l-1 ; j >= 0; j--){ if( s[j] == '6'){System.out.println('9');} if( s[j] == '9'){System.out.println('6');}
else {cout<<s[j];} } }
System.out.println("\n");
c++;
}

}
}


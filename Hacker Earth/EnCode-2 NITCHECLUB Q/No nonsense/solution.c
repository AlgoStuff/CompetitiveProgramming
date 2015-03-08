#include <stdio.h>
#define N 100000000
 
struct stack
{
    int stk[N];
    int top;
};
typedef struct stack STACK;
STACK s,p;
 
void push(int);
void pop(void);

int main ()
{
	int queries;
	scanf("%d",&queries);
	int num;
    	s.top = -1;
 	p.top = -1;
	int choice;
	while (queries--)
    	{
		scanf("%d",&choice);
        	switch (choice)
        	{
	       	case 1:
			scanf("%d",&num);
            		push(num);
            		break;
        	case 2:
            		pop();
            		break;
        	case 3:
            		printf("%d\n",p.stk[p.top]);
           		break;
        	case 4:
            		return;
        	}
        	fflush (stdin);
    	}
return 0;
}

void push (int num)
{
    	if(p.top==-1 || p.stk[p.top]<num)
	{
		p.top=p.top+1;
		p.stk[p.top]=num;
	}
    	if (s.top == (N - 1))
    	{
      	  	return;
    	}
    	else
    	{
      		s.top = s.top + 1;
        	s.stk[s.top] = num;
    	}
    	return;
}

void pop ()
{
	int a;
	if (s.top == - 1)
    	{
        	return;
    	}
    	else
    	{
		a=s.stk[s.top];
        	s.top = s.top - 1;
    	}
	if(a==p.stk[p.top])
	{
		p.top=p.top-1;
	}
    	return;
}

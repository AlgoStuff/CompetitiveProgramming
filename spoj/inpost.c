#include<stdio.h>
#include<string.h>

int f=0;

struct stack{
char x;
struct stack *next;
}stck,*ptr;

int prec(char e)
{
	if(e=='+' || e=='-')
		return 1;
	else if(e=='*' || e=='/')
		return 2;
	else if(e=='^')
		return 3;
	return 0;
}

void push(struct stack *stk, char element)
{
	struct stack *nptr=malloc(sizeof(stck));
	nptr->x=element;
	ptr=stk->next;
	stk->next=nptr;
	nptr->next=ptr;
}

char pop(struct stack *stk)
{
	if(stk->next!=NULL)
	{
		struct stack *tmp;
		char e;
		tmp=stk->next;
		stk->next=tmp->next;
		e=tmp->x;
		free(tmp);
		return e;
	}
	return 	-1;
}

char peek(struct stack *stk)
{
	if(stk->next!=NULL)
	{
		char e;
		e=(stk->next)->x;
		return e;
	}
	return 	-1;
}

main()
{
	char s[10],o[10],c;
	FILE *fp=fopen("input.txt","r");
	fscanf(fp,"%s",s);
	fclose(fp);
	int i=0;
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]>=96 && s[i]<=123)
			o[f++]=s[i];
		else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'|| s[i]=='^')
		{
			while(prec(peek(&stck))>=prec(s[i]) && stck.next!=NULL)
				o[f++]=pop(&stck);
			push(&stck,s[i]);
		}
		else if(s[i]=='(')
			push(&stck,'(');
		else if(s[i]==')')
		{	while(peek(&stck)!='(')
				o[f++]=pop(&stck);
			c=pop(&stck);
		}
	}
	while(stck.next!=NULL)
		o[f++]=pop(&stck);
	o[f]='\0';
/*	for(i=0;i<f;i++)
	printf("%c",o[i]);
	printf("\n");
*/	printf("%s\n",o);
}

#include<stdio.h>
//#include<conio.h>
typedef struct linkedlist
{
        int info;
        struct linkedlist *next;
}node;
void create(node *head);
void insert_beg(node *head,int value);
void insert_last(node *head,int value);
int dlt_first(node *head);
int dlt_last(node *head);
void display(node *head);
main()
{
      int choice,val,i;
      node *list;
      while(1)
      {

              printf("1-create list\n");
              printf("2-insert at the beggining\n");;
              printf("3-insert at the last\n");
              printf("4-delete first node\n");
              printf("5-delete last node\n");
              printf("6-Display\n");
              printf("7-EXIT\n");
              printf("Enter your choice\n");
              scanf("%d",&choice);
              switch(choice)
              {
                            case 1:
                                 create(list);
                                 printf("list created\n");
                                 break;
                            case 2:
                                 printf("Enter the value to be inserted at beggining\n");
                                 scanf("%d",&val);
                                 insert_beg(list,val);
                                 break;
                            case 3:
                                 printf("Enter the value to be inserted at last\n");
                                 scanf("%d",&val);
                                 insert_last(list,val);
                                 break;
                            case 4:
                                 printf("Deleting first node\n");
                                 i=dlt_first(list);
                                 printf("First node having value %d have been deleted\n",i);
                                 break;
                            case 5:
                                 printf("Deleting last node\n");
                                 i=dlt_last(list);
                                 printf("Last node having value %d have been deleted\n",i);
                                 break;
                            case 6:
                                 display(list);
                                 break;
                            case 7:
				return 0;
                            default:
                                  printf("You have entered wrong choice\n");
              }
      }

      return 0;
}


void create(node *head)
{
     head=NULL;
}

void insert_beg(node *head,int value)
{
     node *p;
     p->info=value;
     p->next=NULL;
     if(head==NULL)
     head=p;
     else
     {
         p->next=head;
         head=p;
     }
     printf("value %d has been inserted at the beggining\n",value);
}

void insert_last(node *head,int value)
{
     node *p,*r;
     p->info=value;
     p->next=NULL;
     if(head==NULL)
     head=p;
     else
     {
         for(r=head;r->next!=NULL;r=r->next)
         ;
         r->next=p;
     }
     printf("value %d has been inserted at the last\n",value);
}

int dlt_first(node *head)
{
    node *r;
    int m;
    r=head;
    head=head->next;
    m=r->info;
   delete r;
    return m;
}

int dlt_last(node *head)
{
    node *r,*t;
    int m;
    for(r=head;r->next->next!=NULL;r=r->next)
    ;
    t=r->next;
    m=t->info;
   delete t;
    return m;
}

void display(node *head)
{
     node *t;
     for(t=head;t!=NULL;t=t->next)
     {
     printf("%d\t",t->info);
     }
}

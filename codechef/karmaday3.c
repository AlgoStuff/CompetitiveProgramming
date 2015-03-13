//linked list merge sort

#include <stdio.h> 
#include <string.h>
typedef struct list_struct {
struct list_struct *next;
char *key;
 }list;
int keycmp (list *p, list *q)
{
return strcmp(p->key, q->key);
}
list *lmerge (list *p, list *q)
{
list *r, head;
for ( r = &head; p && q; )
{
if ( keycmp(p, q) < 0 )
{
r = r->next = p;
p = p->next;
}
else
{
r = r->next = q;
q = q->next;
}
}
r->next = (p ? p : q);
return head.next;
}
list *lsort (list *p)
{
list *q, *r;
if ( p )
{q = p;
for ( r = q->next; r && (r = r->next) != NULL; r = r->next )
q = q->next;
r = q->next;
q->next = NULL;
if ( r )
p = lmerge(lsort(r), lsort(p));
}
return p;
}
main()
{
list *listp;
listp = lsort(listp);
return 1;
}

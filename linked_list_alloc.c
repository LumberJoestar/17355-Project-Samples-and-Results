#include <stdlib.h>
typedef struct Node{int v;struct Node*next;}Node;
int main(){Node*head=NULL;for(int i=0;i<100000;i++){Node*n=malloc(sizeof(Node));n->next=head;head=n;}
while(head){Node*t=head;head=head->next;free(t);}}
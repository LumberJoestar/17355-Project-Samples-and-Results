#include <stdlib.h>
typedef struct Node{struct Node*l,*r;}Node;
Node*make(int d){if(d==0)return NULL;Node*n=malloc(sizeof(Node));n->l=make(d-1);n->r=make(d-1);return n;}
void free_all(Node*n){if(!n)return;free_all(n->l);free_all(n->r);free(n);}
int main(){Node*root=make(15);free_all(root);}
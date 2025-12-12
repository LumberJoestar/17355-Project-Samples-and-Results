#include <stdlib.h>
int main(){int size=20000000;int *t=calloc(size,sizeof(int));
for(int i=0;i<size;i++)t[i]=(i*2654435761u)%size;free(t);}
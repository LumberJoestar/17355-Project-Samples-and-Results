#include <stdlib.h>
int main(){int **m=malloc(1000*sizeof(int*));
for(int i=0;i<1000;i++)m[i]=malloc(1000*sizeof(int));
for(int i=0;i<1000;i++)free(m[i]);free(m);}
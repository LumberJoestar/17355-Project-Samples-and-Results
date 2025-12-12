#include <stdlib.h>
int main(){void **map=malloc(50000*sizeof(void*));
for(int i=0;i<50000;i++)map[i]=malloc((i%100+1)*128);
for(int i=0;i<50000;i++)free(map[i]);free(map);}
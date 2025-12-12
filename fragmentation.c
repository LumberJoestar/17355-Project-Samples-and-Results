#include <stdlib.h>
int main(){void *blocks[10000];
for(int i=0;i<10000;i++)blocks[i]=malloc((i%50+1)*128);
for(int i=0;i<10000;i+=2)free(blocks[i]);
for(int i=0;i<10000;i++)if(i%2==0)blocks[i]=malloc(1024);
for(int i=0;i<10000;i++)free(blocks[i]);}
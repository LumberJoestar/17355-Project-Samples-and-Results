#include <stdlib.h>
#include <string.h>
int main(){char*s=malloc(1);s[0]='\0';
for(int i=0;i<30000;i++){s=realloc(s,strlen(s)+2);strcat(s,"x");}free(s);}
#include <stdlib.h>
int main(){for(int i=0;i<100000;i++)free(malloc(64));}
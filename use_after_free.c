#include <stdlib.h>
#include <stdio.h>
int main(){int *x=malloc(4);free(x);printf("%d\n",*x);}
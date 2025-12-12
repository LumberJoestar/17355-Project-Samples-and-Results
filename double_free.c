#include <stdlib.h>
int main(){int *x=malloc(4);free(x);free(x);}
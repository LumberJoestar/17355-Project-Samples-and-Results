#include <stdlib.h>
int main(){int **p=malloc(sizeof(int*));*p=malloc(20*sizeof(int));return 0;}
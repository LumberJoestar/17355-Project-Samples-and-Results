#include <stdlib.h>
#include <string.h>
int main(){int cap=1,size=0;int *arr=malloc(sizeof(int));
for(int i=0;i<200000;i++){if(size==cap){cap*=2;arr=realloc(arr,cap*sizeof(int));}
arr[size++]=i;}free(arr);}
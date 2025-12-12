#include <stdlib.h>
int cmp(const void*a,const void*b){return*(int*)a-*(int*)b;}
int main(){int *arr=malloc(200000*sizeof(int));for(int i=0;i<200000;i++)arr[i]=rand();
qsort(arr,200000,sizeof(int),cmp);free(arr);}
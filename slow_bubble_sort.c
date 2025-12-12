#include <stdlib.h>
int main(){int n=20000;int *arr=malloc(n*sizeof(int));
for(int i=0;i<n;i++)arr[i]=rand();
for(int i=0;i<n;i++)for(int j=0;j<n-1;j++)if(arr[j]>arr[j+1]){int t=arr[j];arr[j]=arr[j+1];arr[j+1]=t;}
free(arr);}
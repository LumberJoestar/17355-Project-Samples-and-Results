#include <stdlib.h>
int main(){int N=400;double *A=malloc(N*N*sizeof(double));
double *B=malloc(N*N*sizeof(double));double *C=malloc(N*N*sizeof(double));
for(int i=0;i<N*N;i++)A[i]=B[i]=1.0;
for(int i=0;i<N;i++)for(int j=0;j<N;j++)for(int k=0;k<N;k++)C[i*N+j]+=A[i*N+k]*B[k*N+j];
free(A);free(B);free(C);}
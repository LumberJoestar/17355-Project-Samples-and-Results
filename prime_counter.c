#include <stdio.h>
int main(){int count=0;
for(long i=2;i<20000000;i++){int prime=1;
for(long j=2;j*j<=i;j++)if(i%j==0){prime=0;break;}
count+=prime;}printf("%d\n",count);}
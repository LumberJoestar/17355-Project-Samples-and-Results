#include <stdlib.h>
void f(int n){if(n==0)return;int *x=malloc(1000);f(n-1);free(x);}
int main(){f(2000);}
long f(long x){return x<2?x:f(x-1)+f(x-2);}
int main(){f(42);}
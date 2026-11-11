#include <stdio.h>
typedef struct{
    char a;
    int b;
    short c;
}s1;
typedef struct{
    int a;
    short b;
    char c;
}s2;
int main(void){
    size_t i;
    size_t n;
    size_t m;
    i=sizeof(s1);
    n=sizeof(s2);
    m=sizeof(int)+sizeof(char)+sizeof(short);
    printf("%zu %zu %zu",i,n,m);
    return 0;
}
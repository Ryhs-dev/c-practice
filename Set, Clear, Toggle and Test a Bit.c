#include <stdio.h>
unsigned int set(unsigned int a,int t){
    unsigned int i=1u<<t;
    a=a|i;
    return a;
}
unsigned int clear(unsigned int a,int t){
    unsigned int i=1u<<t;
    i=~i;
    a=a&i;
    return a;
}
unsigned int toggle(unsigned int a,int t){
    unsigned int i=1u<<t;
    a=a^i;
    return a;
}
unsigned int test(unsigned int a,int t){
    a=(a>>t)&1;
    return a;
}
int main(void){
    unsigned int num;
    int n;
    scanf("%u %d",&num,&n);
    while(n>=32||n<0){
        scanf("%d",&n);
    }
    unsigned int a,b,c,d;
    a=set(num,n);
    b=clear(num,n);
    c=toggle(num,n);
    d=test(num,n);
    printf("%u,%u,%u,%u\n",a,b,c,d);
    return 0;
}

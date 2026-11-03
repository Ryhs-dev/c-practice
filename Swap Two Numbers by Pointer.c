#include <stdio.h>
void swap_int(int *p,int *q){
    int t;
    t=*p;
    *p=*q;
    *q=t;
}
int main(void){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("before:%d %d\n",a,b);
    swap_int(&a,&b);
    printf("after:%d %d\n",a,b);
    return 0;
}
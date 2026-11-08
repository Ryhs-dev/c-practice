#include <stdio.h>
int check(int a){
    a=a&1;
    return a;
}
void swap(int *p,int *q){
    if(p==q){
    }
    else{
    *p^=*q;
    *q^=*p;
    *p^=*q;
    }
}
int main(void){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int t=check(num1);
    if(t==1){
        printf("odd\n");
    }
    else{
        printf("even\n");
    }
    swap(&num1,&num2);
        printf("num1=%d num2=%d\n",num1,num2);
    return 0;
}
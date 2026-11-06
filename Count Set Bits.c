#include <stdio.h>
unsigned int count_bits1(unsigned int a){
    if(a==0){
        return 0;
    }
    else{
        return 1+count_bits1((a)&(a-1));
        }
}
int count_bits(unsigned int a,int *p){
    int i=0;
    int loops=0;
    while(a!=0){
        loops+=1;
        if((a&1)==1){
            i+=1;
        }
        a=a>>1;
    }
    *p=loops;
    return i;
}
int main(void){
    unsigned int num;
    int t;
    int t1,c1;
    printf("please the num:");
    scanf("%u",&num);
    t1=count_bits1(num);
    t=count_bits(num,&c1);
    printf("%d,%d\n",t1,t1);
    printf("%d,%d\n",t,c1);
    return 0;
}
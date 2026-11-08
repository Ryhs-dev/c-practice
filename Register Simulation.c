#include <stdio.h>
unsigned char reg=0;
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
    int b;
    b=(a>>t)&1;
    return b;
}
void binary(unsigned char a){
    int c[8];
    for(int i=7;i>=0;i--){
        c[i]=(a>>i)&1u;
        printf("%d",c[i]);
    }
    printf("\n");
}
int main(void){
    for(;;){
    int t,i,b;
    printf("please enter the num:");
    scanf("%d",&t);
    while(t<0||t>4){
        printf("please enter the num between 0~4\n");
        scanf("%d",&t);
    }
    if(t==0){
        break;
    }
    scanf("%d",&i);
        while(i<0||i>7){
            printf("please enter the num between 0~7\n");
        scanf("%d",&i);
    }
    switch(t){
        case 1:reg=set(reg,i);break;
        case 2:reg=clear(reg,i);break;
        case 3:reg=toggle(reg,i);break;
        case 4:b=test(reg,i);printf("number %d is %d\n",i,b);break;
        default:break;
    }
    binary(reg);
}
return 0;
}


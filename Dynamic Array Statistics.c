#include <stdio.h>
#include <stdlib.h>
int iterate_max(int *p,int n){
    int m=*p;
    int *f;
    f=p+n;
    for(;p<f;p++){
        if(*p>m){
            m=*p;
        }
    }
    return m;
}
int iterate_sum(int *q,int s){
    int add=0;
    int *g;
    g=q+s;
    for(;q<g;q++){
        add+=*q;
    }
    return add;
}
int main(void){
    int n;
    printf("please enter the num:");
    scanf("%d",&n);
    if(n<=0){
        printf("error\n");
        return 1;
    }
    int *p;
    int i;
    p=(int *)malloc(n*sizeof(int));
    if(p==NULL){
        printf("error\n");
        return 1;
    }
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }
    int max=iterate_max(p,n);
    int sum=iterate_sum(p,n);
    double average=(double)sum/n;
    printf("max:%d sum:%d avr:%.2f\n",max,sum,average);
    free(p);
    p=NULL;
    return 0;
}
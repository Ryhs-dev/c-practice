#include <stdio.h>
#include <stdlib.h>
int double_pointer(int **pp,int n){
    int i=0;
    if(n<=0){
        return -1;
    }
    *pp=(int*)malloc(n*sizeof(int));
    if(*pp==NULL){
        return -1;
    }
    for(;i<=n-1;i++){
        (*pp)[i]=i+1;
    }
    return 0;
}
int main(void){
    int n;
    int *p=NULL;
    int i=0;
    int ret;
    printf("please enter the num:");
    scanf("%d",&n);
    ret=double_pointer(&p,n);
    if(ret==-1){
        return -1;
    }
    for(;i<=n-1;i++){
    printf("%d\n",p[i]);
}
    free(p);
    p=NULL;
    return 0;
}
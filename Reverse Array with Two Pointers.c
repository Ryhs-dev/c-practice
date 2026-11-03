#include <stdio.h>
void change_line(int *p,int n){
    int *q;
    q=p+n-1;
       for(p;p<q;p++,q--){
        int t;
        t=*p;
        *p=*q;
        *q=t;
    }
}
    
int main(void){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    change_line(&a[0],n);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
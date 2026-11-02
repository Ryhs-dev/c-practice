#include <stdio.h>
 int GCD_z(int a,int b){
    int t;
    if(b!=0){
        t=a;
        a=b;
        b=t%b;
    }
    else{
        return a;    
    }
}
//循环版
int gcd_rec(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return gcd_rec(b,a%b);
    }
}
int main(void){
    int a,b;
    int max;
    scanf("%d %d",&a,&b);
    max=gcd_rec(a,b);
    printf("%d",max);
    return 0;
} 
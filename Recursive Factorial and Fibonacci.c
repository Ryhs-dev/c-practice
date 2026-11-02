#include <stdio.h>
int count=0;
long long factorial(int a){
    if(a<0||a>20){
        return -1;
    }
    else{
    if(a==0){
        return 1;
}
else{
        return a*factorial(a-1);
}
}
}
long long fib(int a){
    count=(count+1)/2;
    if(a<0||a>40){
        return -1;
    }
    else{
    if(a==2||a==1){
        return 1;
    }
    else if(a==0){
        return 0;
    }
    else{
        return fib(a-1)+fib(a-2);
    }
    }
}
int main(void){
    int n;
    scanf("%d",&n);
    if(factorial(n)==-1){
        printf("error\n");
    }
    else{
    printf("factorial is %lld\n",factorial(n));
    }
    if(fib(n)==-1){
        printf("error\n");
    }
    else{
    printf("fib is %lld\n",fib(n));
    printf("num is %d",count);
    }
    return 0;
}
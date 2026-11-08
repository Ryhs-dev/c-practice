#include <stdio.h>
void binary(unsigned char a){
    int c[8];
    for(int i=7;i>=0;i--){
        c[i]=(a>>i)&1u;
        printf("%d",c[i]);
    }
    printf("\n");
}
int main(void){
    unsigned char a;
    printf("please enter the num:");
    scanf("%hhu",&a);
    binary(a);
    return 0;
}

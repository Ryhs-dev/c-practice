#include <stdio.h>
int make_strlen(char *p){
    int n=0;
    for(;*p!='\0';p++){
        n+=1;
    }
    return n;
}
int main(void){
    char s[100];
    int i = 0;
    int ch;
    ch = getchar();
    while (ch != '\n' && ch != EOF && i < 99) {
        s[i] = ch;
        i++;
        ch = getchar();
    }
    s[i] = '\0';
    int num=make_strlen(s);
    printf("long %d\n",num);
    return 0;
}
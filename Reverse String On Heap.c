#include <stdio.h>
#include <stdlib.h>
void make_reverse(char *p){
    char *q;
    int i=0;
    while(p[i]!='\0'){
        i+=1;
    }
    if(i==0){
        return ;
    }
    q=p+i-1;
    for(;p<q;p++,q--){
       char t;
       t=*p;
       *p=*q;
       *q=t;
    }
}
int main(void){
    char *p;
    p=(char*)malloc(100*sizeof(char));
    if(p==NULL){
        return 1;
    }
    int ch;
    int i=0;
    ch=getchar();
    while(ch!='\n'&&ch!=EOF&&i<99){
        p[i]=ch;
        i++;
        ch=getchar();
    }
    p[i]='\0';
    make_reverse(p);
    printf("%s\n",p);
    free(p);
    p=NULL;
    return 0;
}

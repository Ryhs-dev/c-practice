#include <stdio.h>
int make_strcmp(char *p,char *q){
    int a;
    while(*p==*q&&*p!='\0'){
        p++;
        q++;
    }
        a=*p-*q;
    return a;
}
int make_times(char *p,char a){
    int i=0;
    while(*p!='\0'){
    if(*p==a){
        i+=1;
    }
    p++;
}
    return i;
}
int main(void){
    char c1[20],c2[20];
    int ch1,ch2;
    int i=0,t=0;
    ch1=getchar();
    while(ch1!='\n'&&ch1!=EOF&&i<19){
        c1[i]=ch1;
        i++;
        ch1=getchar();
    }
    c1[i]='\0';
    ch2=getchar();
    while(ch2!='\n'&&ch2!=EOF&&t<19){
        c2[t]=ch2;
        t++;
        ch2=getchar();
    }
    c2[t]='\0';
    int cmp=make_strcmp(c1,c2);
    if(cmp>0){
        printf("p>q\n");
    }
    else if(cmp==0){
        printf("p=q\n");
    }
    else{
        printf("p<q\n");
    }
    int ch;
    ch=getchar();
    int n=make_times(c1,ch);
    printf("%d\n",n);
    return 0;
}
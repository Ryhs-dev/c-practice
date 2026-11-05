#include <stdio.h>
#include <stdlib.h>
char * make_strdup(char *p){
    int i=0;
    while(p[i]!='\0'){          // 改1:用下标数长度,p 不动,起点不会丢
        i+=1;
    }
    char *q;                    // 改2:q 接 malloc 的结果,它就是副本起点
    q=(char *)malloc((i+1)*sizeof(char));
    if(q==NULL){
        return NULL;
    }
    int k;
    for(k=0;k<i;k++){           // 改3:k 从 0 到 i-1,原串第 k 个 → 副本第 k 个
        q[k]=p[k];
    }
    q[i]='\0';                  // 改4:最后一个位置(下标 i)补结束符
    return q;                   // 改5:q 全程没动,返回的就是起点
}
int main(void){
    char a[100];
    int i=0;
    char *p;
    p=a;
    int ch;
    ch=getchar();
    while(ch!='\n'&&ch!=EOF&&i<99){
        *p=ch;
        i+=1;
        p++;
        ch=getchar();
    }
    *p='\0';
    p=a;
    char *q;
    q=make_strdup(p);
    if(q==NULL){
        return 1;
    }
    else{
        printf("%s\n",q);
    }
    free(make_strdup(q));
    q=NULL;
    return 0;
}
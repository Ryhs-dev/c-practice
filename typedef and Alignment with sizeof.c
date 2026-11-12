#include <stdio.h>
typedef struct{
    char a;
    int b;
    short c;
}s1;
typedef struct{
    int a;
    short b;
    char c;
}s2;
int main(void){
    size_t i;
    size_t n;
    size_t m;
    i=sizeof(s1);
    n=sizeof(s2);
    m=sizeof(int)+sizeof(char)+sizeof(short);
    printf("%zu %zu %zu",i,n,m);
    return 0;
}
//结构体对齐值只和自己成员最大的对齐值有关 要能整除
/*类型	32 位 PC(x86 / ARM32)	64 位 PC(Linux/macOS 的 x86-64、ARM64)	64 位 Windows	16 位单片机(如 8051、AVR)
char	1 / 1	1 / 1	1 / 1	1 / 1
short	2 / 2	2 / 2	2 / 2	2 / 2
int  	4 / 4	4 / 4	4 / 4	2 / 2(多数)
long	4 / 4	8 / 8	4 / 4	4 / 1 或 2
long long	8 / 4(x86)或 8(ARM)	8 / 8	8 / 8	8 / 1 或 2
float	4 / 4	4 / 4	4 / 4	4 / 1 或 2
double	8 / 4(x86 Linux)或 8	8 / 8	8 / 8	视编译器
指针	4 / 4	8 / 8	8 / 8	2 / 2*/
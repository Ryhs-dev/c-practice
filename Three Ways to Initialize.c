#include <stdio.h>
#include <string.h>
struct point{
    int x;
    int y;
    char name[10];
};
int main(void){
    struct point s1={1,2,"zheng"};
    strcpy(s1.name,"abc");
    struct point s2={.y=9,.x=4,.name="zhen"};
    struct point s3={.x=1};
    struct point s4;
    printf("%d %d %s\n",s1.x,s1.y,s1.name);
    printf("%d %d %s\n",s2.x,s2.y,s2.name);
    printf("%d %d %s\n",s3.x,s3.y,s3.name);
    printf("%d %d %s\n",s4.x,s4.y,s4.name);
return 0;
}
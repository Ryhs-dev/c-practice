#include <stdio.h>
typedef struct student{
    int number;
    char name[10];
    float grade;
}STUDENT;
void grade_change(STUDENT *p){
    p->grade+=5;
}
int main(void){
    STUDENT s1={1,"tom",56};
    STUDENT *pt=&s1;
    printf("%d %s %f\n",s1.number,s1.name,s1.grade);
    grade_change(pt);
    printf("%d %s %f\n",s1.number,s1.name,s1.grade);
    return 0;
}
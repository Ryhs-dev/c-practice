#include <stdio.h>
struct student
{
    int number;
    char name[10];
    float grade;
};
int main(void){
    struct student s1={0};
    struct student s2={0};
    scanf("%d %9s %f",&s1.number,s1.name,&s1.grade);
    scanf("%d %9s %f",&s2.number,s2.name,&s2.grade);
    printf("s1: %d %s %f\n", s1.number, s1.name, s1.grade);
    printf("s2: %d %s %f\n", s2.number, s2.name, s2.grade);
    return 0;
}
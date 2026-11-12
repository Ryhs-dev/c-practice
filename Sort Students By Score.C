#include <stdio.h>
struct student{
    int number;
    char name[10];
    float grade;
};
int main(void){
    struct student s[5];
    struct student s1={0};
    for(int i=0;i<5;i++){
        scanf("%d %s %f",&s[i].number,s[i].name,&s[i].grade);
    }
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(s[i].grade<s[j].grade){
                s1=s[i];
                s[i]=s[j];
                s[j]=s1;
            }
        }
        printf("%d %s %f\n",s[i].number,s[i].name,s[i].grade);
    }
    return 0;
}


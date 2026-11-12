#include <stdio.h>
struct student{
    int number;
    char name[10];
    float grade;
};
int main(void){
    struct student s[5];
    int maxidx=0;
    int minidx=0;
    float sum=0;
    for(int i=0;i<5;i++){
        scanf("%d %s %f",&s[i].number,s[i].name,&s[i].grade);
        sum+=s[i].grade;
    }
    s[maxidx]=s[0];
    s[minidx]=s[0];
    for(int i=1;i<5;i++){
        if(s[i].grade>s[maxidx].grade){
            maxidx=i;
        }
        if(s[i].grade<s[minidx].grade){
            minidx=i;
        }
    }
    float avarage;
    avarage=(float)sum/5;
    printf("high:%d %s %.2f\n",s[maxidx].number,s[maxidx].name,s[maxidx].grade);
    printf("low:%d %s %.2f\n",s[minidx].number,s[minidx].name,s[minidx].grade);
    printf("avarage:%.2f sum:%.2f",avarage,sum);
    return 0;
}
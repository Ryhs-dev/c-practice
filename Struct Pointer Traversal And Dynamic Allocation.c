#include <stdio.h>
#include <stdlib.h>
typedef struct Student{
    int number;
    char name[10];
    float grade;
}student;
int main(void){
    student *pt=NULL;
    student *pt1=NULL;
    int num;
    printf("how many people:");
    scanf("%d",&num);
    pt=(student *)malloc(num*sizeof(student));
    if(pt==NULL){
        return 1;
    }
    pt1=pt;
    for(int i=0;i<num;i++){
        scanf("%d %s %f",&pt->number,pt->name,&pt->grade);
        pt++;
    }
    pt=pt1;
    for(int u=0;u<num;u++){
        printf("%d %s %f\n",pt->number,pt->name,pt->grade);
        printf("%p\n",(void *)pt);
        pt++;
    }
    pt=pt1;
    free(pt);
    pt=NULL;
    return 0;
}

#include<stdio.h>
struct student
{
int age,roll;
};
int main()
{

    struct student student[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter information for student %d\n",i+1);
        printf("Enter age=");
        scanf("%d",&student[i].age);
        printf("Enter roll=");
        scanf("%d",&student[i].roll);
    }
    printf("\n");
     for(i=0;i<5;i++)
    {

        printf("Age=%d\n",student[i].age);
        printf("Roll=%d\n",student[i].roll);
    }
}

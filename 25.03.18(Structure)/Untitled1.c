#include<stdio.h>
main()
{
    struct student
{
    int age;
    int roll;
    char dept;
};
    struct student student1;

    printf("Student1\n");
    scanf("%d\n%d\n%c\n ",&student1.age,&student1.roll,&student1.dept);


  printf("student1\nage=%d\nroll=%d\ndept=%c\n\n",student1.age,student1.roll,student1.dept);


}

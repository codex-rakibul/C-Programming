#include<stdio.h>
main()
{
    struct student
{
    int age;
    int roll;
    char dept;
};
   struct student student1,student2,student3,student4;
   student1.age=18;
   student1.roll=01;
   student1.dept='a';

   student2.age=19;
   student2.roll=02;
   student2.dept='a';

   student3.age=18;
   student3.roll=03;
   student3.dept='a';

   student4.age=19;
   student4.roll=04;
   student4.dept='a';

  printf("student1\nage=%d\nroll=%d\ndept=%c\n\n",student1.age,student1.roll,student1.dept);
  printf("student2\nage=%d\nroll=%d\ndept=%c\n\n",student2.age,student2.roll,student2.dept);
  printf("student3\nage=%d\nroll=%d\ndept=%c\n\n",student3.age,student3.roll,student3.dept);
  printf("student4\nage=%d\nroll=%d\ndept=%c\n",student4.age,student4.roll,student4.dept);

}

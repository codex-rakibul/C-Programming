#include<stdio.h>
main()
{
    struct student
{
    int id;
    float roll;
    float result;
};
   struct student student1,student2,student3,student4;
   printf("\nEnter Student1 id roll and result:");
   scanf("%d",&student1.id);
   scanf("%f",&student1.roll);
   scanf("%f",&student1.result);

   printf("\nEnter Student2 id , roll and result:");
   scanf("%d",&student2.id);
   scanf("%f",&student2.roll);
   scanf("%f",&student2.result);

   printf("\nEnter Student3 id , roll and result:");
   scanf("%d",&student3.id);
   scanf("%f",&student3.roll);
   scanf("%f",&student3.result);

   printf("\nEnter Student4 id , roll and result:");
   scanf("%d",&student4.id);
   scanf("%f",&student4.roll);
   scanf("%f",&student4.result);

  printf("student1\nid=%d\nroll=%.2f\nResult=%.2f\n\n",student1.id,student1.roll,student1.result);
  printf("student2\nid=%d\nroll=%.2f\nResult=%.2f\n\n",student2.id,student2.roll,student2.result);
  printf("student3\nid=%d\nroll=%.2f\nResult=%.2f\n\n",student3.id,student3.roll,student3.result);
  printf("student4\nid=%d\nroll=%.2f\nResult=%.2f\n",student4.id,student4.roll,student4.result);

}


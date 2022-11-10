#include<stdio.h>
main()
{
    struct student
{
    int id;
    float result;
};
   struct student student[100];
   int s;
   for(s=1;s<3;s++)
   {
       printf("\nEnter Student1 id roll and result:");
      scanf("%d",&student[s].id);
       scanf("%f",&student[s].result);
   }
   for(s=1;s<3;s++)
   {
       printf("\n\n\nStudent Id%d:%d\n",s,student[s].id);
       printf("Student Result%d:%f\n",s,student[s].result);
   }
}



#include<stdio.h>
main()
{
    union student
{
    long double id;
    float result;
};
   union student student[100];
   unsigned s;
   for(s=1;s<3;s++)
   {
       printf("\nEnter Student1 id roll and result:");
       scanf("%lf",&student[s].id);
       scanf("%f",&student[s].result);
   }
   for(s=1;s<3;s++)
   {
       printf("\n\n\nStudent Id%d:%.lf\n",s,student[s].id);
       printf("Student Result%d:%.2f\n",s,student[s].result);
   }
}




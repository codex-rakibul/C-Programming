#include<stdio.h>
main()
{
   unsigned long n;
   int fact=1;
   int i;

   printf("Enter the value of integer number n=\n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       fact=fact*i;
   }
   printf("Reslut =%u",fact);

}

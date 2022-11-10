#include<stdio.h>
main()
{
   int array[10],i,n,sum,temp=0;
   for(i=0; i<10; i++)
   {
       printf("Enter the integer number=");
       scanf("%d",&array[i]);
   }

   printf("\n\nPlease Enter your n number:");
   scanf("%d",&n);
   printf("%d\n",n);
for(i=0;i<1;i++)
    {
      (n==array[i])?printf("Not Found\n"):printf("found");
    }


}


#include<stdio.h>
main()
{
   int array[5],i,sum=0;
   for(i=0; i<5; i++)
   {
       printf("Enter the integer number=");
       scanf("%d",&array[i]);
   }
       for(i=0;i<5;i++)
   {
       printf("***********************\n");
       printf("The reuslt is= %d\n",array[i]);
       printf("***********************\n");
   }
       for(i=0;i<5;i++)
   {
       sum=sum+array[i];

   }

    printf("$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("Sum of reuslt =%d\n",sum);
    printf("$$$$$$$$$$$$$$$$$$$$$$$$");


}

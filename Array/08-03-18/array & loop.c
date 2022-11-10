#include<stdio.h>
main()
{
   int array[5],i;
   for(i=0; i<5; i++)
   {
       printf("Enter the integer number=");
       scanf("%d",&array[i]);
   }
   for(i=0;i<5;i++)
   {
       printf("***********************\n");
       printf("The reuslt is= %d\n",array[i]);
       printf("***********************");
   }
}

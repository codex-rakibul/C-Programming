#include<stdio.h>
main()
{
   int array[0],i,sum=0;

   for(i=0; i<5; i++)
   {

       printf("Enter the integer number=");
       scanf("%d",&array[i]);
   }
   for(i=0;i<5;i++)

   {
       sum=sum+array[i];

   }


    printf("%d",sum);


}

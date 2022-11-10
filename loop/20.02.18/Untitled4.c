#include<stdio.h>
#include<math.h>
main()
{
   int a=123,sum=0;
   for(; ;)
   {
       a=a%10;
       sum=sum+a;
       a++;

       if(a>=0)

     {
         break;

     }

    }
        printf("%d",sum);
}

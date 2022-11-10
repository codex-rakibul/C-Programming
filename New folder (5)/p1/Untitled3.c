#include<stdio.h>
main()
{
   int n,t,t1;
   scanf("%d",&t);
   for(n=1;n<=t;n++)
   {
       scanf("%d",&n);
   }
   for(n=2;n<100;n++)
   {
    if(n%2!=0)
    {
        printf("%d ",t1*n);
        n++;
    }
    }
}


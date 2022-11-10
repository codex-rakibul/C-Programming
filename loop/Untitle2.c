#include<stdio.h>
main()
{

    int a,b,sum=0;
    printf("Enter the value of number A and B =\n");
    scanf("%d%d",&a,&b);

      for(;a<=b;a++)
    {
        if(a%2==0)
       sum=sum+a;
    }

    printf("Result =%d",sum);
}

#include<stdio.h>
main()
{
    int a,b,a1,b1,max1,max2,sum;
    printf("enter the integers numbers:");
    scanf("%d %d",&a,&b);
    max1=(a>b)?a : (b>a)?b :a;
    printf("Max1=%d\n",max1);

    printf("enter the integers numbers:");
    scanf("%d %d",&a1,&b1);
    max2=(a1>b1)?a1 : (b1>a1)?b1 :a1;
    printf("Max2=%d\n",max2);

    sum=max1+max2;
    printf("Sum=%d",sum);
}

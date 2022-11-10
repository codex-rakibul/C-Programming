#include<stdio.h>
main()
{

    float a,b,c,sum;
    printf("Enter the number\n");
    scanf("%f%f%f",&a,&b,&c);

    sum=a+b+c;
    if(a!=0 && b!=0 && c!=0 && sum==180)
    printf("Valid input\n");
    else
    printf("Invalid inputs");

}

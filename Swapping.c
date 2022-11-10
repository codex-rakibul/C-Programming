#include<stdio.h>
main()
{
    int num1=1,num2=5,temp;
    temp=num1;
    num1=num2;
    num2=temp;

    printf("%d\n%d",num1,num2);
}

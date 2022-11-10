#include <stdio.h>

             main()
{
    int year;
    printf("Input your year = ");
    scanf("%d",&year);
    if ((year%4==0&&year%100!=0) ||(year%400==0))

    printf(" leap year\n");
    else
    printf(" not leap year \n");

}


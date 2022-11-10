#include <stdio.h>

     main()

{
    int year ,leapyear;
    scanf ("%d",&year);
    leapyear = (year%4==0)&&(year%100!=0)?
    printf("THIS IS A LEAP YEAR\n"):
    (year%400==0)?
    printf("THIS IS A LEAP YEAR\n"):
    printf("THIS IS NOT A LEAP YEAR");



}


#include<stdio.h>
#include<math.h>
main()
{
    int days,month,day2,year,day1;
    scanf("%d",&days);
    year=days/365;
    day1=days%365;
    month=day1/30;
    day2=day1%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)",year,month,day2);


}

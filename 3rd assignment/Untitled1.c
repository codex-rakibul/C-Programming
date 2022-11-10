#include<stdio.h>
main()
{
    int a=1,b=2,c=3,a1,a2,a3,a4;
    double x=1.0;
    a1=((a>b)&&(c<b));
    a2=(a>=b)||!!a;
    a3=a+b>=c+c;
    a4=(a-x)||((b*c)&&(b/a));
    printf("%d\n%d\n%d\n%d",a1,a2,a3,a4);

}

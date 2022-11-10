#include <stdio.h>

  int  main()
{
    int a=125, b=12345;
    long ax=1234567890;
    short s=4043;
    float x=2.13459;
    double dx=1.1415927;
    char c='W';
    unsigned long ux=2541567890;

    int a1=a+c, a2=x+c, a3=((int)dx)+ax, a4=a+x, a5=s+b, a6=ax+b, a7=s+c, a8=ax+c, a9=ax+ux;

    printf("sum1 : %d\n",a1);
    printf("sum2 : %d\n",a2);
    printf("sum3 : %d\n",a3);
    printf("sum4 : %d\n",a4);
    printf("sum5 : %d\n",a5);
    printf("sum6 : %d\n",a6);
    printf("sum7 : %d\n",a6);
    printf("sum8 : %d\n",a8);
    printf("sum9 : %d\n",a9);


    return 0;
}

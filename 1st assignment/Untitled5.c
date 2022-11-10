#include <stdio.h>

    int main()
{
    int           a  = 125, b=12345;
    long          ax = 1234567890;
    short         s  = 4043;
    float         x  = 2.13459;
    double        dx = 1.1415927;
    char          c  = 'W';
    unsigned long ux = 2541567890;

    float a1=((int)dx)+ax;

    printf("Sum1     = %d\n",a+c);
    printf("Sum2     = %f\n",x+c);
    printf("Sum3     = %f\n",dx+x);
    printf("Sum4     = %f\n",a1);
    printf("Sum5     = %f\n",a+x);
    printf("Sum6     = %d\n",s+b);
    printf("Sum7     = %d\n",ax+b);
    printf("Sum8     = %d\n",s+c);
    printf("Sum9     = %d\n",ax+c);
    printf("sum10    = %u\n",ax+ux);


    return 0;
                    //Rakibul


}

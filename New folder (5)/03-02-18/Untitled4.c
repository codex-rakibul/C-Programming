#include <stdio.h>

int main()
{
    float f_first;
    double d_second;
    long double id_third;

    printf("\n Enter value of the first number:");
    scanf("%f",&f_first);
    printf("\nFirst =%f",f_first);

    printf("\n Enter value of the second number:");
    scanf("%d",&d_second);
    printf("\nSecond =%1f",d_second);

    printf("\n Enter value of the third number:");
    scanf("%d",&id_third);
    printf("\nThird =%Lf",id_third);

    return 0;

}

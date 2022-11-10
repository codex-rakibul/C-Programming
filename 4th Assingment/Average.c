#include<stdio.h>
#include<math.h>

main()
{
    double A,B,sum;
    scanf("%lf %lf",&A,&B);
    sum=((A*3.5)+(B*7.5))/11;
    //sum=((A+B)/2);
    printf("MEDIA = %.5lf",sum);
}

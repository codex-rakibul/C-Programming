#include<stdio.h>
#include<math.h>

main()
{
    int R;
    double VOLUME,pi=3.14159;
    scanf("%d",&R);

    VOLUME=(4/3.0*pi*R*R*R);
    printf("VOLUME = %.3lf",VOLUME);

}

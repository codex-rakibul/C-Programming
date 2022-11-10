#include<stdio.h>
#include<math.h>

main()
{
    double A,B,C,R1,R2,sum;
    scanf("%lf %lf %lf",&A,&B,&C);

    R1=(((-B)+sqrt((B*B)-4*A*C))/(2*A));
    R2=(((-B)-sqrt((B*B)-4*A*C))/(2*A));

    (((B*B)-4*A*C)<0 || A==0)?
    printf("Impossivel calcular"):
    printf("R1 = %.5lf\nR2 = %.5lf",R1,R2);


}

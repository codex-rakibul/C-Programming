#include<stdio.h>
#include<math.h>

main()
{
    char name;
    double s,s1,T1,T2;
    scanf("%s %lf %lf",&name,&s,&s1);
    T1=(s1*15)/100;
    T2=s+T1;
    printf("TOTAL = R$ %.2lf",T2);
}

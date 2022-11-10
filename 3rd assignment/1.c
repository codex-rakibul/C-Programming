#include<stdio.h>
#include<math.h>
main()
{
    int n;
    double x,result;
    printf("Enter the x nmber: \n");
    scanf("%lf",&x);
    printf("Enter the n nmber: \n");
    scanf("%d",&n);

    result=pow(x,n);
    printf("%.1lf^%d = %.7lf",x,n,result);
}

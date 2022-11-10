#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x;
    printf("Enter the x number:");
    scanf("%lf",&x);

    printf("Enter the n number:");
    scanf("%d",&n);

    int sum=fun(n);
    printf("%lf",sum);

}
int sum(int n, double x)
{
    sum=pow(x,n);
    return 0;
}

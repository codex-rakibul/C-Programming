#include<stdio.h>
int fun(int n,int x)
{
    if(n==0)
    return 1;
    return a*fun(a,b-2);
}
main()
{
    int a;
    int b;
    scanf("%d",&a);

    scanf("%d",&b);
    int fib=fun();
    printf("%d",fib);
}

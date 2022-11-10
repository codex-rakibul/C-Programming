#include<stdio.h>
int main()
{
    int n;
    printf("Enter your number:");
    scanf("%d",&n);
    fun(n);
}
int fun(int n)
{

    printf("*%d *",n);

    if(n==1)
    return ;
    if(n%2==0)
    return fun(n/2);
    else
    return fun(3*n+1);
}

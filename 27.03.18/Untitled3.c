#include<stdio.h>

void fun(int *a,int *b){
printf("%d\n%d",*a,*b);
}
main()
{
    int a,b;
    a=11;
    b=66;
    fun(&a,&b);
}

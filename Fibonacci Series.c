#include<stdio.h>
main()
{
    int first,second,fibo,i,j;

    first=0;
    second=1;

    for(i=0;i<5;i++)
    {
        fibo=first+second;
        first=second;
        second=fibo;
    }

        printf("%d",fibo);
}

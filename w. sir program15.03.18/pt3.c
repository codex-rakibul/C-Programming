#include<stdio.h>

main()
{
    int n=1;
    while(n<10)
    {
        n++;
        if(n==5)
            continue;
        if (n==7)
            break;

        printf("%d\n",n);
    }

}

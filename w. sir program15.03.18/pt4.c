#include<stdio.h>

main()
{
    int n;
    for(n=0;n<10;n++)
    {
        if(n==5)
            continue;
        if (n==7)
            break;

        printf("%d\n",n);
    }

}

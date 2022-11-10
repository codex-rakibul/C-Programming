#include<stdio.h>
main()
{
    int i=1;
    print:
    printf("%d\n",i);
    i++;
    if(i<5)
    goto print;
}

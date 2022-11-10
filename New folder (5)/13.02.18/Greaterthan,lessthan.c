#include<stdio.h>

    main()
{
    int a,b,c;
    a=2,b=3,c=4;
    printf("******Result******\n");
    printf("*\t%d        *\n\t%d\n\t%d\n\t%d\n\t%d\n\t%d\n",a>>5,a<<2,b<<1,b>>2,c>>a,c<<b);
    printf("*******Done*******");
}

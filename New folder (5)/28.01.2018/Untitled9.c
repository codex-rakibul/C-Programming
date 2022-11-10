#include <stdio.h>

main()
{
    int a=2, b=3;  //-,*,/,+,-,%
    a-=b;
    a=a-b;
    printf("%d\n",a);
    a=a-b;
    printf("%d\n",a);
}

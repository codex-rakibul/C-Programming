#include<stdio.h>
main()
{
    int x=10;
    int *p;
    p=&x;
    printf("%d\n%d\n%d\n%d\n",x,&x,p,*p);

}

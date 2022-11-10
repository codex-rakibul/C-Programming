#include<stdio.h>
main()
{
    char s1[ ]="CSE";
    char s2[ ]="CSED";
    /*strcmp(s1,s2);
    printf("%s %s",s1,s2);*/
    int a=strcmp(s1,s2);
    if(a==0)
    printf("Same");
    else
    printf("Not Same");
}

#include<stdio.h>
main()
{
    char s[ ]="CSE DEPT";
    int i=0;
    while(s[i]!='\0')
    {
        printf("========\n");
        printf("=  %c   =\n",s[i]);
        printf("========\n");
        i++;
    }
}

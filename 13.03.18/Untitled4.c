#include<stdio.h>
main()
{
    char a[20];
    printf("Please enter your Integer Alphabet:\n");
    scanf("%[^\n]",&a);


    printf("*************************\n");
    printf("*    %s\t*\n",a);
    printf("*************************");

}

#include <stdio.h>

    main()
{
    int a, b, c, result;

    printf("a  =");
    scanf("%d",&a);

    printf("b  =");
    scanf("%d",&b);

    printf("c  =");
    scanf("%d",&c);                      //scan  //(!(a!=b)

    printf("***************************\n");

    result =(a==b) && (c>b);
    printf("(a==b) && (c>b) equals to %d\n",result);

    result =(a==b) || (c<b);
    printf("(a==b) || (c<b) equals to %d\n",result);

    result =(a==b) || (c>b);
    printf("(a==b) || (c>b) equals to %d\n",result);

    result =(a!=b) && (c>b);
    printf("(a!=b) && (c>b) equals to %d\n",result);

    printf("***************************\n");



}




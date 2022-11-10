#include <stdio.h>

    main()
{
    int a=5, b=5, c=10, result;

    printf("***************************\n");
                                                         //(!(a!=b)
    result =(a==b) && (c>b);
    printf("(a==b) && (c>b) equals to %d\n",result);

    result =(a==b) || (c<b);
    printf("(a==b) && (c<b) equals to %d\n",result);

    result =(a==b) || (c>b);
    printf("(a==b) && (c>b) equals to %d\n",result);

    result =(a!=b) && (c>b);
    printf("(a==b) && (c>b) equals to %d\n",result);

    printf("***************************\n");

}


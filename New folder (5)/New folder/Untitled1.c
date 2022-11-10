#include <stdio.h>

    main()
{
    int a,b,c,max;
    printf("Enter the value  number:\n");
    scanf("%d%d%d",&a,&b,&c);

    max=(a>b && a>c)?a:(b>c)?b:c;
    printf("Maximum number %d , %d and %d is =%d\n",a,b,c,max);



}


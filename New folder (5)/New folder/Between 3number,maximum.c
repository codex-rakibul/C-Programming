#include <stdio.h>

    main()
{
    int a,b,c,max;
    printf("Enter the value  number:\n");
    scanf("%d%d%d",&a,&b,&c);

    printf("\********************\n");
    max=(a>b && a>c)?a:(b>c)?b:c;
    printf("Maximum number is =%d\n",max);
    printf("\********************\n");



}

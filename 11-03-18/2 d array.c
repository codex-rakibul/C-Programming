#include<stdio.h>
main()
{
    int i,j,array[2][4];

    for(i=0;i<2;i++)
    {
          for(j=0;j<4;j++)
        {
            printf("array[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
    }

        printf("*************************\n");
        printf("*\tresult=%d\t*\n",array[1][2]);
        printf("*************************");

}


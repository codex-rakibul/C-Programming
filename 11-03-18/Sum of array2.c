#include<stdio.h>
main()
{
    int i,j,array[2][4],array1[2][4],SumArray[2][4];
    printf("Enter the elements:\n");

         for(i=0;i<2;i++)

    {
          for(j=0;j<4;j++)
        {
            printf("array[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
    {



        printf("*************************\n");
        printf("*\t result=%d\t*\n",array[1][2]);
        printf("*************************\n");

}
        printf("\n");

    }
          for(i=0;i<2;i++)

    {
          for(j=0;j<4;j++)
        {
            printf("array[%d][%d]=",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<4;j++)
    {

        printf("*************************\n");
        printf("*\t result=%d\t*\n",array[1][2]);
        printf("*************************\n");

}
        printf("\n");
            for(i=0; i<2; i++)
    {

        for(j=0; j<4; j++)
        {

           SumArray[i][j]=array[i][j]+array2[i][j];

        }
        printf("\n");
    }

    for(i=0; i<2; i++)
    {

        for(j=0; j<4; j++)
        {

            printf(" %d\t", SumArray[i][j]);

        }
        printf("\n");
    }



    }
}


#include<stdio.h>

int main()
{

    int i, j;
    int array[2][4],array2[2][4],SumArray[2][4];

    for(i=0; i<2; i++)
    {

        for(j=0; j<4; j++)
        {

            printf("Input The value of array [%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);

        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<2; i++)
    {

        for(j=0; j<4; j++)
        {

            printf(" %d\t", array[i][j]);

        }
        printf("\n");
    }

    printf("\n\n");


    for(i=0; i<2; i++)
    {

        for(j=0; j<4; j++)
        {

            printf("Input The value of array [%d][%d]: ",i,j);
            scanf("%d",&array2[i][j]);

        }
        printf("\n");
    }

    printf("\n");

    for(i=0; i<2; i++)
    {

        for(j=0; j<4; j++)
        {

            printf(" %d\t", array2[i][j]);

        }
        printf("\n");
    }

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

    return 0;
}


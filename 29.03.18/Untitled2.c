#include<stdio.h>

int main()
{
    int i,min,array[10];
    for(i=0; i<5; i++)

    {
        printf("Please your integer number :");
        scanf(" %d",&array[i]);
    }

    min=fun(array);
    printf("\n*******************************\n");
    printf("*  The minimum number is: %d  *\n",min);
    printf("*******************************\n");

}
int fun(int array[])
{
    int i;
    int minimum=array[0];

    for(i=0; i<5; i++)

    {
            if(minimum>array[i])
            minimum=array[i];

    }

    return minimum;

}


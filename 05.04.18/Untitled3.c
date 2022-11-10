#include<stdio.h>
int main()
{
    int array[5];
    int i,n;
    int temp=0;

    for(i=0; i<5; i++)
    {
        printf("Enter the number of array:\n");
        scanf("%d",&array[i]);
    }
    printf("enter the n value:\n");
    scanf("%d",&n);
    for(i=0; i<5; i++)
    {
            if(n==array[i])
            {
                printf("found");
                break;
            }

    else
        temp++;


    }
    if (temp==5)
        printf("not found");

    return 0;

}

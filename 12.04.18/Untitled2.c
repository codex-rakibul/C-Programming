#include<stdio.h>
main()
{
    int s,r,sum=0,arr[100];
    printf("\n\t======================");
    printf("\n\tEnter Your S Number:");
    scanf("%d",&s);
    printf("\t======================\n\n\n");
    printf("\t============================\n");
    for(r=0;r<s;r++)
    {
         printf("\n\tEnter Your Array[%d] Number:",r);
         scanf("%d",&arr[r]);
    }
       printf("\t============================\n");
        for(r=0;r<s;r++)
    {
        sum=sum+arr[r];
    }
        printf("\n\n\t*********************\n");
        printf("\t* Your Result:%d    *\n",sum);
        printf("\t*********************\n");
}

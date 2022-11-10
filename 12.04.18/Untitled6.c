#include<stdio.h>
main()
{
    int s,r,sum=0,arr[100];
    printf("\n\n\tSum Of Even Index Number");
    printf("\n\n\t======================");
    printf("\n\tEnter Your S Number:");
    scanf("%d",&s);
    printf("\t======================\n\n\n");
    printf("\t============================\n");
    for(r=1;r<s;r++)
    {
         printf("\n\tEnter Your Array[%d] Number:",r);
         scanf("%d",&arr[r]);
    }
       printf("\t============================\n");
        for(r=1;r<s;r++)
    {
        if(r%2==0)
        sum=sum+arr[r];

    }
        printf("\n\n\t*********************\n");
        printf("\t* Your Result:%d    *\n",sum);
        printf("\t*********************\n");
}



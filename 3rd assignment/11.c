#include<stdio.h>
main()
{
    int i, j;
    printf("Input two intergers:\n");
    scanf("%d %d",&i,&j);
    while(i!=0,i<7)
    {
        printf("%d %d %d\n",i,++i,+-i);
        i++;
    }
    while(j!=0,j<9)
     {
        printf("%d %d %d\n",j,++j,+-j);
        j++;
    }
}

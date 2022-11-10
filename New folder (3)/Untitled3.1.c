#include <stdio.h>

int main()
{
    int X, M, L;

    scanf("%d%d",&X,&M,&L);

    int a=X+M+L, a1=L+M+X;
    printf("The reverse of :%d%d is",&a,&a1);

    return 0;
}

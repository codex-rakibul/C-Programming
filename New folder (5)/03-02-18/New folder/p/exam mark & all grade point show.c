#include<stdio.h>

int main()
{
    int mark;
    printf("Enter the marks:\n");
    scanf("%d",&mark);
    switch(mark)
    {
    case 80:
    printf("\tA+\n");

    case 75:
    printf("\tA\n");

    case 70:
    printf("\tA-\n");

    case 65:
    printf("\tB+\n");

    case 60:
    printf("\tB\n");

    case 55:
    printf("\tB-\n");

    case 50:
    printf("\tC+\n");

    case 45:
    printf("\tC\n");

    case 40:
    printf("\tD\n");

    printf("\tF\n");



    }
    return 0;
}

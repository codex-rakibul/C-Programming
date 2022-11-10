#include <stdio.h>

    int main()
{
    float marks;
    printf("Enter the your exam marks :\n");
    scanf("%f",& marks);
    printf("********************\n");
    printf(" Your Grade Point\n");
    printf("********************\n");

    if (marks>=80)
{
     printf("\tA+");
     printf("\n********************\n");
    printf("  Congratulations\n");
    printf("********************\n");
}
    else if (marks>=75)
{
    printf("\tA");
    printf("\n********************\n");
    printf("  Congratulations\n");
    printf("********************\n");
}
    else if (marks>=70)
{
    printf("\tA-");
    printf("\n********************\n");
    printf("  Congratulations\n");
    printf("********************\n");
}
    else if (marks>=65)
{
    printf("\tB+");
    printf("\n********************\n");
    printf("          Good        \n");
    printf("********************\n");
}
    else if (marks>=60)
{
    printf("\tB");
   printf("\n********************\n");
    printf("          Good        \n");
    printf("********************\n");
}
    else if (marks>=55)
{
    printf("\tB-");
    printf("\n********************\n");
    printf("          Good        \n");
    printf("********************\n");
}
    else if (marks>=50)
{
    printf("\tC+");
    printf("\n********************\n");
    printf("Next time make a Good Result\n");
    printf("********************\n");
}
    else if (marks>=45)
{
    printf("\tC");
     printf("\n********************\n");
    printf("Next time make a Good Result\n");
    printf("********************\n");
}
    else if (marks>=40)
{
    printf("\tD");
     printf("\n********************\n");
    printf("Next time make a Good Result\n");
    printf("********************\n");
}
    else if (marks<=40)
{
    printf("\tF");
     printf("\n********************\n");
    printf("       Bad Result      \n");
    printf("********************\n");
}

    return 0;
}

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
}
    else if (marks>=75)
{
    printf("\tA");
}
    else if (marks>=70)
{
    printf("\tA-");
}
    else if (marks>=65)
{
    printf("\tB+");
}
    else if (marks>=60)
{
    printf("\tB");
}
    else if (marks>=55)
{
    printf("\tB-");
}
    else if (marks>=50)
{
    printf("\tC+");
}
    else if (marks>=45)
{
    printf("\tC");
}
    else if (marks>=40)
{
    printf("\tD");
}
    else if (marks<=40)
{
    printf("\tF");
}
    printf("\n********************\n");
    printf("  Congratulations\n");
    printf("********************\n");

    main();
    return 0;
}


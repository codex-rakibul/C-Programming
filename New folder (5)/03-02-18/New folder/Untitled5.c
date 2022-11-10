#include <stdio.h>

    void main()
{
    int i_first;
    double d_second;
    char c_choice, c_temp=getchar;

    /*Read and print the values*/
    printf("\nEnter the value of i_first :");
    scanf("%d",&i_first);

    printf("\nEnter the value of d_second :");
    scanf("%lf",&d_second);

    c_temp=getchar;
    printf("\nEnter the value of c_choice :");
    scanf("%c",&c_choice);



    printf("\nValues of the variables are %d\%lf%c",i_first,d_second,c_choice);



}  /*End of function main*/

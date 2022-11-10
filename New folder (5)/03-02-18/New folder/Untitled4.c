/*Program to illustrate the use of scanf*/
#include <stdio.h>
/*beginning of main function*/

    void main()
{
    /*Declare variables*/
    int i_first;
    double d_second;
    char c_choice;

    /*Read and print the values*/
    printf("\nEnter the values:");
    scanf("%d%lf%c", &i_first,&d_second,&c_choice);
    printf("\nValues of the variables are %d\%lf%c",i_first,d_second,c_choice);

}   /*End of function main*/

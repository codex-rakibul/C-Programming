#include<stdio.h>
void Find_Factors(int *);
int main()
{
    int number,*p;
    printf("Please Enter your number:\n");
    scanf("%d",&number);
    p=&number;
    printf("\n Factors of a number are:\n");
    Find_Factors(p);

    return 0;
}

void Find_Factors(int *number)
{
    int i;
    for (i=1; i<=*number;i++)
    {
        if(*number%i==0)
        {
            printf("%d ",i);
        }
    }
}

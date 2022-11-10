#include<stdio.h>
int main()
{
    int number,i=1;
    printf("Please enter your number:\n");
    scanf("%d",&number);

    printf("The factors of a number are:\n");
    while(i<=number)
    {
        if(number%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }
    return 0;
}

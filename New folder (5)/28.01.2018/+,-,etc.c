#include <stdio.h>

     int main ()
{
     int a;
     float b;

     printf("Input 1st number  :");
     scanf("%d", &a);

     printf("Input 2nd number  :");
     scanf("%f",&b);

     printf("\n\n**** RAKIBUL ****\n\n\Sum of two numbers            =%f\n",a+b);
     printf("Difference of two numbers     =%f\n",a-b);
     printf("Multiplication of two numbers =%f\n",a*b);
     printf("Quotient of two numbers       =%f\n",a/b);

     int x1= (a%(int)(float)b);
     printf("Remainder of two numbers      =%f\n",x1);

     return 0;


}

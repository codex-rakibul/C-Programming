#include<stdio.h>
main()
{
    float f_number;
    printf("\n Enter the value of number :");
    scanf("%f",& f_number);

    printf("\n Scientific Notations \n");
    printf("%e\n",f_number);
    printf("%15.3e\n",f_number);
    printf("%-15.3e\n",f_number);
    printf("\n Normal Notations\n");
    printf("%f\n",f_number);
    printf("%15.3f\n",f_number);
    printf("%-15.3f\n",f_number);
    printf("015.3f\n",f_number);

}

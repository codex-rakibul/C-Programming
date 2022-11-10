#include<stdio.h>

    main()
{
    int age;
    char gender;
    printf("**************Vote***************\n");
    printf("Enter age & gender: ");
    scanf("%d\n%c",&age,&gender);

    if(age>=18&&gender=='m')
        printf(" Line 1\n");

    else if(age>=18&&gender=='f')
        printf("Line 2\n");


    else if(age>=18&&gender=='o')
        printf("Line 3\n");

    else
    printf("Not eligible for vote");




}

#include <stdio.h>

    main()
{
    char a;
    printf("Enter the value of two number =\n ");
    scanf("%c",&a);
    if((a>='a' && a<='z') || (a>='A' && a<='Z'))
    printf("The Character is Alphabet  :\n");
    else
    printf("The Character is not Alphabet:\n");
}

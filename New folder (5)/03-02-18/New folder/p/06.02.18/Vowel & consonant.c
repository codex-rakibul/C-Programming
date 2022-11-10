#include <stdio.h>

    main()
{
    char a1;
    printf("Enter the value of two number =\n ");
    scanf("%c",&a1);
    if(a1=='a'||a1=='A'||a1=='e'||a1=='E'||a1=='i'||a1=='I'||a1=='o'||a1=='O'||a1=='u'||a1=='U')
    printf("The Alphabet is vowel  :\n");
    else
    printf("The Alphabet is consonant:\n");
}


#include<stdio.h>
main()
{
    float GPA[0],Maximum;
    int i;
    Maximum=GPA[0];
    for(i=1;i<5;i++)
    {
        Maximum<GPA[i];
        Maximum=GPA[i];
    }
    printf("%f",Maximum);
}


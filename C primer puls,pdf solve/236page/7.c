#include <stdio.h>
int main(void)
{
    char ch;
    int Ic = 0;
    int uc = 0;
    int oc = 0;

    while ((ch = getchar()) !='#')
    {
        if('a'<= ch>='z')
        Ic++;
        else if(! (ch<'A') || !(ch>'Z'))
                uc++;
                oc++;
    }
    printf("%d lowercase, %d uppercase, %d other",Ic,uc,oc);
    return 0;
}

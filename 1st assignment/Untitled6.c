#include <stdio.h>

    int main()
{
    int Days1 = 1329;
    int Years = (Days1/365);
    int Days2 = (Days1%365);
    int Weeks = (Days2/7);
    int Days3 = (Days2%7);

    printf("Years  = %d\n",Years);
    printf("Weeks  = %d\n",Weeks);
    printf("Days   = %d\n",Days3);

    return 0;

                     //Rakibul
}

#include <stdio.h>

int main()
{
    int given_days = 1329;
    int years = given_days / 365;
    int weeks = (given_days - (years * 365))/7;
    int days  = given_days - ((years * 365) + (weeks * 7));

    printf ("Years: %d\n", years);
    printf ("Weeks: %d\n", weeks);
    printf ("Days : %d\n", days);

    return 0;
}

#include <stdio.h>
#define ROWS  4
#define CHARS 8

int main()
{
       int row;
       char col;

       for (row = 0; row < ROWS; row++)
    {
            for (col = '$'; ch < ('$' + CHARS); col++)
        {
            printf( "$");
        }

            printf("\n");
    }

    return 0;
}

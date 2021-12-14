#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        printf("\n");
        for (j = 0; j <= 5; j++)
        {
            // Also can use 5 space = printf("%5d", j);
            printf("\t%d", j);
        }
    }

    return 0;
}
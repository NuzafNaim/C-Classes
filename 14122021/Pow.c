#include <stdio.h>
#include <math.h>

int main()
{
    int n, sum = 0, i;
    printf("Enter n Value: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(i, 2);
    }
    for (i = 1; i <= n; i++)
    {
        if (i != n)
            printf("%d^2+", i);
        else
            printf("%d^2=%d", i, sum);
    }

    return 0;
}
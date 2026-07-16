#include <stdio.h>

int main()
{
    int a, b, k;
    int remainder;
    int digit = 0;
    int i;

    scanf("%d %d %d", &a, &b, &k);

    remainder = a % b;

    for (i = 1; i <= k; i++)
    {
        remainder = remainder * 10;
        digit = remainder / b;
        remainder = remainder % b;
    }

    printf("%d\n", digit);

    return 0;
}

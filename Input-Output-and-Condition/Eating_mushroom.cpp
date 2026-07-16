#include <stdio.h>

int main()
{
    long long x, y;
    long long count = 0;
    int i;

    scanf("%lld %lld", &x, &y);

    for (i = 0; i < y; i++)
    {
        if (x != 7 && x != 8)
        {
            count++;
        }

        x++;

        if (x > 8)
        {
            x = 2;
        }
    }

    printf("%lld\n", count);

    return 0;
}

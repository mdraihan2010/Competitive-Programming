#include <stdio.h>

int main()
{
    char a, b;
    int diff;

    scanf(" %c %c", &a, &b);

    if (a >= 'a' && a <= 'z')
    {
        a = a - 32;
    }

    if (b >= 'a' && b <= 'z')
    {
        b = b - 32;
    }

    diff = b - a;

    if (diff < 0)
    {
        diff = diff * (-1);
    }

    printf("%d\n", diff - 1);

    return 0;
}

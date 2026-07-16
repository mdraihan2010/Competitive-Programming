#include <stdio.h>

int main()
{
    int a, b;
    int x, y;
    int temp;
    int gcd;

    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (y != 0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }

    gcd = x;

    printf("%d %d\n", a / gcd, b / gcd);

    return 0;
}

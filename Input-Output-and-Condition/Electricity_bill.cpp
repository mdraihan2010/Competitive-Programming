#include <stdio.h>

int main()
{
    int x, a, b, c, d;

    scanf("%d %d %d %d %d", &x, &a, &b, &c, &d);

    if (x <= 50)
    {
        printf("%d\n", x * a);
    }
    else if (x <= 100)
    {
        printf("%d\n", 50 * a + (x - 50) * b);
    }
    else if (x <= 150)
    {
        printf("%d\n", 50 * a + 50 * b + (x - 100) * c);
    }
    else
    {
        printf("%d\n", 50 * a + 50 * b + 50 * c + (x - 150) * d);
    }

    return 0;
}

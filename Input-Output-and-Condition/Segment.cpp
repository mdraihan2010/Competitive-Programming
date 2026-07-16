#include <stdio.h>

int main()
{
    int a, b, c, d;
    int start, end;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > c)
    {
        start = a;
    }
    else
    {
        start = c;
    }

    if (b < d)
    {
        end = b;
    }
    else
    {
        end = d;
    }

    if (start <= end)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

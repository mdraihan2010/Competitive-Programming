#include <stdio.h>

int main()
{
    int n;
    int x1, x2, x3, x4;
    int count = 0;

    scanf("%d", &n);

    for (x1 = 1; x1 <= n; x1++)
    {
        for (x2 = x1 + 1; x2 <= n; x2++)
        {
            for (x3 = x2 + 1; x3 <= n; x3++)
            {
                x4 = n - (x1 + x2 + x3);

                if (x4 > x3)
                {
                    count = count + 1;
                }
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    int i;

    scanf("%d", &n);

    for (i = n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}

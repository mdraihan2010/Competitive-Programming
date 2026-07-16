#include <stdio.h>

int main()
{
    int n, k;
    int days = 0;
    int stems = 0;

    scanf("%d %d", &n, &k);

    while (n > 0)
    {
        n = n - 1;
        stems = stems + 1;
        days = days + 1;

        if (stems == k)
        {
            n = n + 1;
            stems = 0;
        }
    }

    printf("%d\n", days);

    return 0;
}

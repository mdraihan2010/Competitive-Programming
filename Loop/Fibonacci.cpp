#include <stdio.h>

int main()
{
    int n;
    int i;

    long long a = 0;
    long long b = 1;
    long long next_term = 0;

    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        if (i <= 1)
        {
            next_term = i;
        }
        else
        {
            next_term = a + b;
            a = b;
            b = next_term;
        }
    }

    printf("%lld\n", next_term);

    return 0;
}

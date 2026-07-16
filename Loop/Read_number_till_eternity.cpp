#include <stdio.h>

int main()
{
    long long n;
    long long result;

    while (scanf("%lld", &n) == 1)
    {
        if (n == 0)
        {
            break;
        }

        result = n * n * n * n * n;

        printf("%lld\n", result);
    }

    return 0;
}

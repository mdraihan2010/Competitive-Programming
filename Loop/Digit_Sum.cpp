#include <stdio.h>

int main()
{
    long long n;
    long long sum = 0;
    long long rem;

    scanf("%lld", &n);

    if (n < 0)
    {
        n = -n;
    }

    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }

    printf("%lld\n", sum);

    return 0;
}

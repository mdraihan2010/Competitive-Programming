#include <stdio.h>

int main()
{
    long long a, b;
    long long sum;
    long long sm = 0;
    long long rem;

    scanf("%lld %lld", &a, &b);

    sum = a + b;

    while (sum != 0)
    {
        rem = sum % 10;
        sm = sm * 10 + rem;
        sum = sum / 10;
    }

    printf("%lld\n", sm);

    return 0;
}

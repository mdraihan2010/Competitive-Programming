#include <stdio.h>

int main()
{
    long long a, b, c;
    long long x;

    scanf("%lld %lld %lld", &a, &b, &c);

    x = a * b;

    printf("%lld\n", x % c);

    return 0;
}

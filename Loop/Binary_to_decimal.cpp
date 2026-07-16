#include <stdio.h>

int main()
{
    long long n;
    long long decimal = 0;
    long long base = 1;
    int last_digit;

    scanf("%lld", &n);

    while (n > 0)
    {
        last_digit = n % 10;

        decimal = decimal + (last_digit * base);

        base = base * 2;

        n = n / 10;
    }

    printf("%lld\n", decimal);

    return 0;
}

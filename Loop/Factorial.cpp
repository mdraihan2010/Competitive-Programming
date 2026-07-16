#include <stdio.h>

int main()
{
    int n;
    int i;
    long long factorial = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }

    printf("%lld\n", factorial);

    return 0;
}

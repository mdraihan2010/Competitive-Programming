#include <stdio.h>
#include <math.h>

int main()
{
    long long n, x;

    scanf("%lld", &n);

    x = sqrt(n);

    if (x * x == n)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

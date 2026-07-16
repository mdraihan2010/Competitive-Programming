#include <stdio.h>

int main()
{
    long long s;
    long long h, m, ss;

    scanf("%lld", &s);

    h = s / 3600;
    s = s % 3600;

    m = s / 60;
    s = s % 60;

    ss = s;

    printf("%lld %lld %lld\n", h, m, ss);

    return 0;
}

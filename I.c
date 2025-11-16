#include <stdio.h>

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);

    if (x - y >= 18)
        puts("RCB");
    else
        puts("CSK");

    return 0;
}

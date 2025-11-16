#include <stdio.h>

int main() {
    long long x, y;
    scanf("%lld %lld", &x, &y);

    if (x > y) {
        printf("%lld\n", x - y);
    } else {
        printf("%lld\n", x + y);
    }

    return 0;
}

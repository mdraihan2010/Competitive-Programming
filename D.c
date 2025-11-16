#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a * 2 + b * 4);
    }

    return 0;
}

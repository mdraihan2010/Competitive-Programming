#include <stdio.h>

int main() {
    int w;
    scanf("%d", &w);

    if (w % 2 == 1 || w == 2) {
        printf("NO");
    } else {
        printf("YES");
    }

    return 0;
}

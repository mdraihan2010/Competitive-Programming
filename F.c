#include <stdio.h>

int main() {
    int h;
    scanf("%d", &h);

    if (h < 8) {
        printf("LESS\n");
    }
    else if (h == 8) {
        printf("PERFECT\n");
    }
    else {
        printf("MORE\n");
    }

    return 0;
}

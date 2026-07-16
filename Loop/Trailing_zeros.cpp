#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    scanf("%d", &n);

    while (n >= 5)
    {
        count = count + (n / 5);
        n = n / 5;
    }

    printf("%d\n", count);

    return 0;
}

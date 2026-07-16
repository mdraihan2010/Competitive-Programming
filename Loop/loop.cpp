#include <stdio.h>

int main()
{
    int l, r;
    int i;

    scanf("%d %d", &l, &r);

    for (i = l; i <= r; i++)
    {
        printf("%d ", i);
    }

    return 0;
}

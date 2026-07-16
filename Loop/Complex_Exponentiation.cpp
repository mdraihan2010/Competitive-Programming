#include <stdio.h>

int main()
{
    int a, b, c;
    int ans = 1;
    int i;

    scanf("%d %d %d", &a, &b, &c);

    for (i = 1; i <= b; i++)
    {
        ans = (ans * a) % c;
    }

    printf("%d\n", ans);

    return 0;
}

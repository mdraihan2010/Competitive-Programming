#include <stdio.h>

int main()
{
    int a, b;
    int ans;

    scanf("%d %d", &a, &b);

    if (a == 0 && b == 0)
    {
        printf("INFINITE SOLUTIONS\n");
    }
    else if (a == 0)
    {
        printf("NO SOLUTION\n");
    }
    else if ((-b) % a != 0)
    {
        printf("NO SOLUTION\n");
    }
    else
    {
        ans = (-b) / a;
        printf("%d\n", ans);
    }

    return 0;
}

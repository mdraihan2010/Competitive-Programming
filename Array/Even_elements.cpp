#include <stdio.h>

int main()
{
    int n;
    int i;
    long long arr[100];
    long long count = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count = count + 1;
        }
    }

    printf("%lld\n", count);

    return 0;
}

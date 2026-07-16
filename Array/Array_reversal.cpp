#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int i;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = n; i >= 1; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");

    return 0;
}

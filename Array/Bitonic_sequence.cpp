#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    i = 0;

    while (i < n - 1 && arr[i] < arr[i + 1])
    {
        i++;
    }

    while (i < n - 1 && arr[i] > arr[i + 1])
    {
        i++;
    }

    if (i == n - 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

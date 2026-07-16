#include <stdio.h>

int main()
{
    int n;
    int i;
    int arr[100];
    int mx, mn;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mx = arr[0];
    mn = arr[0];

    for (i = 1; i < n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }

        if (arr[i] < mn)
        {
            mn = arr[i];
        }
    }

    printf("%d %d\n", mx, mn);

    return 0;
}

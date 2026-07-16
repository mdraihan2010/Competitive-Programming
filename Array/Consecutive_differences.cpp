#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int i;
    int max_diff;
    int current_diff;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (arr[1] > arr[0])
    {
        max_diff = arr[1] - arr[0];
    }
    else
    {
        max_diff = arr[0] - arr[1];
    }

    for (i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            current_diff = arr[i] - arr[i - 1];
        }
        else
        {
            current_diff = arr[i - 1] - arr[i];
        }

        if (current_diff > max_diff)
        {
            max_diff = current_diff;
        }
    }

    printf("%d\n", max_diff);

    return 0;
}

#include <stdio.h>

int main()
{
    int n, q;
    int arr[305];
    int i, j;
    int pos, val;
    int target_idx;

    scanf("%d %d", &n, &q);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < q; i++)
    {
        scanf("%d %d", &pos, &val);

        target_idx = pos - 1;

        for (j = n; j > target_idx; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[target_idx] = val;

        n = n + 1;

        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[j]);
        }

        printf("\n");
    }

    return 0;
}

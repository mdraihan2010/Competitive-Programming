#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int i;
    int mx;
    int pos;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }

    mx = arr[1];
    pos = 1;

    for (i = 1; i <= n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            pos = i;
        }
    }

    printf("%d %d\n", mx, pos);

    return 0;
}

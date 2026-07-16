#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int i;
    int sum = 0;
    int x, y;
    int path1 = 0;
    int path2;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int temp;
        temp = x;
        x = y;
        y = temp;
    }

    for (i = x; i < y; i++)
    {
        path1 = path1 + arr[i];
    }

    path2 = sum - path1;

    if (path1 < path2)
    {
        printf("%d\n", path1);
    }
    else
    {
        printf("%d\n", path2);
    }

    return 0;
}

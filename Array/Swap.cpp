#include <stdio.h>

int main()
{
    int n, q;
    int b[100];
    int qx[100], qy[100];
    int i;
    int x, y;
    int temp;

    scanf("%d %d", &n, &q);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    for (i = 0; i < q; i++)
    {
        scanf("%d %d", &qx[i], &qy[i]);
    }

    for (i = q - 1; i >= 0; i--)
    {
        x = qx[i] - 1;
        y = qy[i] - 1;

        temp = b[x];
        b[x] = b[y];
        b[y] = temp;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }

    printf("\n");

    return 0;
}

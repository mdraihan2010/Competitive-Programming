#include <stdio.h>

int main()
{
    int arr[3];
    int i;
    int sml, big;

    for (i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }

    sml = arr[0];
    big = arr[0];

    for (i = 1; i < 3; i++)
    {
        if (arr[i] < sml)
        {
            sml = arr[i];
        }

        if (arr[i] > big)
        {
            big = arr[i];
        }
    }

    printf("%d %d\n", sml, big);

    return 0;
}

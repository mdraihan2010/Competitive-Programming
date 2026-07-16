#include <stdio.h>

int main()
{
    int n;
    int binary[100];
    int i = 0;
    int j;

    scanf("%d", &n);

    while (n > 0)
    {
        binary[i] = n % 2;
        i++;

        n = n / 2;
    }

    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }

    printf("\n");

    return 0;
}

#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    int i;
    int sum = 0;
    double average;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (double)sum / n;

    printf("%.3lf\n", average);

    return 0;
}

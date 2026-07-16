#include <stdio.h>

int main()
{
    long long n;
    long long current_thickness = 1;
    long long folds = 0;

    scanf("%lld", &n);

    while (current_thickness < n)
    {
        current_thickness = current_thickness * 2;
        folds = folds + 1;
    }

    printf("%lld\n", folds);

    return 0;
}

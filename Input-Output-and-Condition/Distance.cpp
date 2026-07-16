#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    double x, y, distance;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    x = x2 - x1;
    y = y2 - y1;

    distance = sqrt(x * x + y * y);

    printf("%.2lf\n", distance);

    return 0;
}

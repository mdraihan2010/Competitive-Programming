#include <stdio.h>
#define PI 3.141592653589793

int main()
{
    double r;
    double area, circumference;

    scanf("%lf", &r);

    area = PI * r * r;
    circumference = 2 * PI * r;

    printf("%.3lf %.3lf\n", circumference, area);

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r;
    cin >> r;

    const double PI = M_PI;

    double area = PI * r * r;
    double circumference = 2 * PI * r;

    cout << fixed << setprecision(3) << circumference << " " << area << endl;
    return 0;
}
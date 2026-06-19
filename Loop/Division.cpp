#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;

    int remainder = a % b;
    int digit = 0;

    for (int i = 1; i <= k; i++)
    {
        remainder = remainder * 10;
        digit = remainder / b;
        remainder = remainder % b;
    }

    cout << digit << endl;

    return 0;
}
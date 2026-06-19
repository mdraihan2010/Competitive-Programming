#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == 0 && b == 0)
    {
        cout << "INFINITE SOLUTIONS" << endl;
    }
    else if (a == 0)
    {
        cout << "NO SOLUTION" << endl;
    }
    else if ((-b) % a != 0)
    {
        cout << "NO SOLUTION" << endl;
    }
    else
    {
        int ans = (-b) / a;
        cout << ans << endl;
    }

    return 0;
}
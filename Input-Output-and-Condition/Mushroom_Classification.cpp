#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;

    if (a >= 9.0)
    {
        cout << "VERY TOXIC" << endl;
    }
    else if (a >= 5.0)
    {
        cout << "TOXIC" << endl;
    }
    else
    {
        cout << "SAFE" << endl;
    }

    return 0;
}
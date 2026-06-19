#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    long long count = 0;

    for (int i = 0; i < y; i++)
    {
        if (x != 7 && x != 8)
        {
            count++;
        }
        x++; 
        if (x > 8)
        {
            x = 2;
        }
    }

    cout << count << endl;
    return 0;
}
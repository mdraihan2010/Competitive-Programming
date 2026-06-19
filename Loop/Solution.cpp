#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for (int x1 = 1; x1 <= n; x1++)
    {
        for (int x2 = x1 + 1; x2 <= n; x2++)
        {
            for (int x3 = x2 + 1; x3 <= n; x3++)
            {
                int x4 = n - (x1 + x2 + x3);

                if (x4 > x3)
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}
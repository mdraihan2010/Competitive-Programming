#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = (ans * a) % c;
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;

    char x = toupper(a);
    char y = toupper(b);

    int m = x - 'A';
    int n = y - 'A';

    cout << abs(n - m) - 1 << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long s;
    cin >> s;
    long long h = s / 3600;
    s %= 3600;
    long long m = s / 60;
    s %= 60;
    long long ss = s % 60;
    cout << h << " " << m << " " << ss << endl;
    return 0;
}
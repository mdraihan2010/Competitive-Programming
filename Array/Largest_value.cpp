#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int mx = arr[1],pos = 1;
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
            pos = i;
        }
    }
    cout << mx << " " << pos << endl;
    return 0;
}
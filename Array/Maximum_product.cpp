#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    int result_1 = arr[n - 1] * arr[n - 2];
    int result_2 = arr[0] * arr[1];

    cout << max(result_1, result_2) << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int current_length = 0, max_length = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            current_length++;
            max_length = max(max_length, current_length);
        } else {
            current_length  = 0;
        }
    }
    cout << max_length << endl;
    return 0;
}
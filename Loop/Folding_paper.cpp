#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long current_thickness = 1; 
    long long folds = 0;            

    while (current_thickness < n)
    {
        current_thickness *= 2; 
        folds++;                
    }

    cout << folds << endl;
    return 0;
}
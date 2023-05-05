#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<long long> a(n, 1);
    for (int p = 1; p < n; p++)
    {
        for (int q = 1; q < n; q++)
        {
            a[q] += a[q - 1];
        }
    }
    cout << a[n - 1] << endl;
    return 0;
}
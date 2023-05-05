#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    vector<long> a(n, 0);
    for (long p = 0; p < n; p++)
    {
        cin >> a[p];
    }
    sort(a.begin(), a.end());
    cout << a[(n - 1) / 2] << endl;

    return 0;
}
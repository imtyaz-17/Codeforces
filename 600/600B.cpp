#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, m;
    cin >> n >> m;
    vector<long> a(n);
    for (long p = 0; p < n; p++)
    {
        cin >> a[p];
    }

    vector<long> b(m);
    for (long p = 0; p < m; p++)
    {
        cin >> b[p];
    }

    sort(a.begin(), a.end());
    for (long p = 0; p < m; p++)
    {
        long ans = upper_bound(a.begin(), a.end(), b[p]) - a.begin();
        cout << ans << " ";
    }

    return 0;
}
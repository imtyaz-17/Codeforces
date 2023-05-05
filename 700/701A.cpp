#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    vector<pair<long, long>> v(n);
    for (long p = 0; p < n; p++)
    {
        long x;
        cin >> x;
        v[p] = make_pair(x, p + 1);
    }

    sort(v.begin(), v.end());
    for (long p = 0; p < n / 2; p++)
    {
        cout << v[p].second << " " << v[n - 1 - p].second << endl;
    }

    return 0;
}
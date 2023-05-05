#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, x, y;
    cin >> n >> x >> y;
    vector<long long> f(n + 1, 0);
    for (long p = 1; p <= n; p++)
    {
        long long a = f[p - 1] + x;
        long long b = f[(p + 1) / 2] + y + x * (p & 1);
        f[p] = (a < b) ? a : b;
    }

    cout << f[n] << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int d, k, a, b, t;
    cin >> d >> k >> a >> b >> t;

    if (d <= k)
    {
        cout << (d * a) << endl;
    }
    else
    {
        d -= k;
        cout << (k * a + (d / k) * min(k * a + t, k * b) + min(t + (d % k) * a, (d % k) * b)) << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long a, b;
    cin >> a >> b;
    if (b < a)
    {
        long temp = a;
        a = b;
        b = temp;
    }

    long ans(0);
    for (int p = 0; p <= a && 2 * p <= b; p++)
    {
        long test = p + min(b - 2 * p, (a - p) / 2);
        if (test > ans)
        {
            ans = test;
        }
    }

    cout << ans << endl;

    return 0;
}

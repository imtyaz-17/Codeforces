#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    vector<long> impact(n + 1, 0);
    long mx(0), smx(0), rem(1);

    for (long p = 0; p < n; p++)
    {
        long x;
        cin >> x;
        if (x > mx)
        {
            smx = mx;
            mx = x;
            impact[mx] = -1;
        }
        else if (x > smx)
        {
            ++impact[mx];
            smx = x;
        }
    }

    for (long p = 1; p <= n; p++)
    {
        if (impact[p] > impact[rem])
        {
            rem = p;
        }
    }

    cout << rem << endl;

    return 0;
}
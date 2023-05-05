#include <bits/stdc++.h>
using namespace std;
int main()
{

    long m, n;
    cin >> m >> n;
    vector<long> start(n, 0);

    while (m--)
    {
        long timeReady;
        for (int p = 0; p < n; p++)
        {
            long timeNeeded;
            cin >> timeNeeded;
            timeReady = timeReady < start[p] ? start[p] : timeReady;
            timeReady += timeNeeded;
            if (p > 0)
            {
                start[p] = start[p - 1] < start[p] ? start[p] : start[p - 1];
            }
            start[p] += timeNeeded;
        }

        cout << timeReady << endl;
    }

    return 0;
}
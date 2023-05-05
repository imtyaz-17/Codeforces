#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    vector<long> blocks(n + 2);
    for (long p = 1; p <= n; p++)
    {
        cin >> blocks[p];
    }
    for (long p = 1; p <= n; p++)
    {
        blocks[p] = min(blocks[p], 1 + blocks[p - 1]);
    }
    for (long p = n; p >= 0; p--)
    {
        blocks[p] = min(blocks[p], 1 + blocks[p + 1]);
    }
    long final(0);
    for (long p = 1; p <= n; p++)
    {
        final = max(final, blocks[p]);
    }
    cout << final << endl;

    return 0;
}
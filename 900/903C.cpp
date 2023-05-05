#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    map<long, long> m;
    long mc(0);
    for (long p = 0; p < n; p++)
    {
        long x;
        cin >> x;
        ++m[x];
        mc = (mc > m[x]) ? mc : m[x];
    }
    cout << mc << endl;
    return 0;
}
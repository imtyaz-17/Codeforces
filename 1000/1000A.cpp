#include <bits/stdc++.h>
using namespace std;

int main()
{

    long n;
    cin >> n;
    map<string, long> a, b;
    for (long p = 0; p < n; p++)
    {
        string x;
        cin >> x;
        ++a[x];
    }
    for (long p = 0; p < n; p++)
    {
        string x;
        cin >> x;
        ++b[x];
    }

    long chg(n);
    for (map<string, long> :: iterator it = a.begin(); it != a.end(); it++)
    {
        long u = it->second;
        long v = b.count(it->first) ? b[it->first] : 0;
        if (b.count(it->first))
        {
            chg -= (u < v) ? u : v;
        }
    }

    cout << chg << endl;

    return 0;
}
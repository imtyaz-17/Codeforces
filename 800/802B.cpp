#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, k;
    cin >> n >> k;
    vector<long> a(n + 1, 0), next(n + 1, n + 1), last(n + 1, n + 1);

    for (int p = 0; p < n; p++)
    {
        cin >> a[p];
    }
    for (int p = n - 1; p >= 0; p--)
    {
        next[p] = last[a[p]];
        last[a[p]] = p;
    }

    long cost(0);
    set<long> s;

    for (int p = 0; p < n; p++)
    {
        if (s.count(p))
        {
            s.erase(p);
        }
        else
        {
            ++cost;
        }

        if (s.size() >= k)
        {
            s.erase(--s.end());
        }
        s.insert(next[p]);
    }

    cout << cost << endl;
    return 0;
}
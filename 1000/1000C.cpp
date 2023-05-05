#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long int n;
    scanf("%lld", &n);
    vector<pair<long long int, long long int>> a;
    for (long long int p = 0; p < n; p++)
    {
        long long int l, r;
        scanf("%lld %lld", &l, &r);
        a.push_back(make_pair(l, 1));
        a.push_back(make_pair(r + 1, -1));
    }

    sort(a.begin(), a.end());

    vector<long long int> b(n + 1, 0);

    long long int active(0);
    for (long long int p = 0; p < a.size() - 1; p++)
    {
        active += a[p].second;
        b[active] += a[p + 1].first - a[p].first;
    }

    for (long long int p = 1; p <= n; p++)
    {
        printf("%lld ", b[p]);
    }
    puts("");

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, k;
    scanf("%ld %ld", &n, &k);
    vector<pair<long, long>> v(n);
    for (long p = 0; p < n; p++)
    {
        scanf("%ld", &v[p].first);
        v[p].second = p + 1;
    }
    sort(v.rbegin(), v.rend());

    vector<long> w(k);
    long total(0);
    for (long p = 0; p < k; p++)
    {
        total += v[p].first;
        w[p] = v[p].second;
    }
    printf("%ld\n", total);

    sort(w.begin(), w.end());
    w[k - 1] = n;
    for (long p = 0; p < k; p++)
    {
        printf("%ld ", w[p] - ((p == 0) ? 0 : w[p - 1]));
    }
    puts("");

    return 0;
}
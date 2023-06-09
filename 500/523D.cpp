#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    ll n, k;
    scanf("%lld %lld", &n, &k);
    multiset<ll> ms;
    for (ll p = 0; p < k; p++)
    {
        ms.insert(0);
    }

    while (n--)
    {
        ll t, dur;
        scanf("%lld %lld", &t, &dur);
        multiset<ll>::iterator it = ms.begin();
        ll s = *it;
        ms.erase(it);
        ll f = ((s > t) ? s : t) + dur;
        ms.insert(f);
        printf("%lld\n", f);
    }

    return 0;
}
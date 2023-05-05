#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007
#define SIZE 1000002

void solve()
{
    ll n, i;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    priority_queue<int> priorityQ;
    ll ans = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            if (!priorityQ.empty())
            {
                ans += priorityQ.top();
                priorityQ.pop();
            }
        }
        if (arr[i] > 0)
        {
            priorityQ.push(arr[i]);
        }
    }
    cout << ans << endl;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

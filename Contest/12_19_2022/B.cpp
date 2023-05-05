#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j, k;
        cin >> n >> k;
        int h[n], p[n];
        for (i = 0; i < n; i++)
            cin >> h[i];
        for (i = 0; i < n; i++)
            cin >> p[i];

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pairQ;

        for (i = 0; i < n; i++)
            pairQ.push({p[i], h[i]});
        int ans = k;

        while (k > 0 && !pairQ.empty())
        {
            while (!pairQ.empty() && pairQ.top().second <= ans)
            {
                pairQ.pop();
            }
            k -= pairQ.top().first;
            ans += k;
        }
        if (pairQ.empty())
            cout << "YES" << endl;
        else
        {
            cout << "NO" << endl;
        }
    }
}
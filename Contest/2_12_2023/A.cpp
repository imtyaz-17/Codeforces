#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    ll a, b, n, m;
    cin >> a >> b;
    cin >> n >> m;

    ll cost = a * (n / (m + 1)) * m;

    ll a_cost = n % (m + 1) * a;
    ll b_cost = n % (m + 1) * b;

    cost += min(a_cost, b_cost);

    cost = min(cost, b * n);
    cout << cost << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{

    const long long MOD = 1000000007;
    long long n, k;
    cin >> n >> k;
    vector<vector<long long>> dp(1 + k, vector<long long>(1 + n, 0));
    for (long long last = 1; last <= n; last++)
    {
        dp[1][last] = 1;
    }
    for (long long length = 2; length <= k; length++)
    {
        for (long long div = 1; div <= n; div++)
        {
            for (long long last = div; last <= n; last += div)
            {
                dp[length][last] += dp[length - 1][div];
                dp[length][last] %= MOD;
            }
        }
    }

    long long total(0);
    for (long long last = 1; last <= n; last++)
    {
        total += dp[k][last];
        total %= MOD;
    }
    cout << total << endl;
    return 0;
}
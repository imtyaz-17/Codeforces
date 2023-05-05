#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> dp(n + 2, 0);
        int result = n / 2;
        dp[n + 1] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int current = arr[i];
            dp[current] = dp[current + 1] + 1;

            if (current + dp[current] - 1 >= n - current + 1)
            {
                result = min(result, current - 1);
            }
        }
        cout << result << endl;
    }
    return 0;
}

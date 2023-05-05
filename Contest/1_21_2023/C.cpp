#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 5;
vector<int> divisorsArr[N];
int main()
{
    for (int i = 1; i <= 100000; i++)
    {
        for (int d = 1; d * d <= i; d++)
        {
            if (i % d == 0)
            {
                divisorsArr[i].push_back(d);
                if (d * d != i)
                {
                    divisorsArr[i].push_back(i / d);
                }
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int result = INT_MAX;
        int captured = 0;

        vector<int> cnt(m + 1, 0);
        int l = 0, r = -1;
        while (r < n)
        {
            if (captured >= m)
            {
                result = min(result, arr[r] - arr[l]);

                for (auto d : divisorsArr[arr[l]])
                {
                    if (d > m)
                        continue;
                    if (cnt[d] == 1)
                    {
                        captured--;
                    }
                    cnt[d]--;
                }
                l++;
            }
            else
            {
                r++;
                if (r == n)
                    break;
                for (auto d : divisorsArr[arr[r]])
                {
                    if (d > m)
                        continue;
                    if (cnt[d] == 0)
                    {
                        captured++;
                    }
                    cnt[d]++;
                }
            }
        }

        if (result == INT_MAX)
            result = -1;
        cout << result << endl;
    }
    return 0;
}

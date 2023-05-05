#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, i;
        cin >> n >> m;

        vector<long long> v(n + 1);
        for (i = 1; i <= n; i++)
            cin >> v[i];
        long long min_prefix_sum = LLONG_MAX;
        vector<long long> prefxSum(n + 1);

        for (i = 1; i <= n; i++)
        {
            prefxSum[i] = prefxSum[i - 1] + v[i];
            min_prefix_sum = min(min_prefix_sum, prefxSum[i]);
        }

        if (min_prefix_sum == prefxSum[m])
        {
            cout << 0 << endl;
            continue;
        }

        int operation = 0;

        min_prefix_sum = prefxSum[m];
        priority_queue<long long> maxHeap;
        for (i = m; i >= 1; i--)
        {
            if (prefxSum[i] < min_prefix_sum)
            {
                while (!maxHeap.empty() && prefxSum[i] < min_prefix_sum)
                {
                    long long x = maxHeap.top();
                    maxHeap.pop();
                    min_prefix_sum -= (2 * x);
                    operation++;
                }
            }
            maxHeap.push(v[i]);
        }

        min_prefix_sum = prefxSum[m];

        priority_queue<long long, vector<long long>, greater<long long>> minHeap;
        ;

        for (i = m + 1; i <= n; i++)
        {
            minHeap.push(v[i]);

            if (prefxSum[i] < min_prefix_sum)
            {
                while (!minHeap.empty() && prefxSum[i] < min_prefix_sum)
                {
                    long long x = minHeap.top();
                    minHeap.pop();
                    min_prefix_sum += (2 * x);
                    operation++;
                }
            }
        }

        cout << operation << endl;
    }
    return 0;
}
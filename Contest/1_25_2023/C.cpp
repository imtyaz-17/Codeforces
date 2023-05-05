#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> arr2(m);
        for (int i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        sort(arr2.begin(), arr2.end(), greater<int>());

        priority_queue<vector<int>> pQ;
        for (auto it : mp)
            pQ.push({it.second, it.first});
        int result = 0;
        for (int i = 0; i < m; i++)
        {
            if (pQ.size() == 0)
                break;

            vector<int> temp = pQ.top();
            pQ.pop();

            if (temp[0] > arr2[i])
            {
                result += arr2[i];
                pQ.push({temp[0] - arr2[i], temp[1]});
            }
            else
            {
                result += temp[0];
            }
        }

        cout << result << endl;
    }
    return 0;
}

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
        map<int, int> mp;
        int mxSize = 0;
        int sz;
        for (int j = 0; j < n; j++)
        {
            cin >> sz;
            mp[sz]++;
            mxSize = max(mxSize, sz);
        }
        int count = 0;
        for (int i = 1; i <= mxSize; i++)
        {
            if (mp[i] != 0)
            {
                count++;
            }
            int j = i + 1;
            while (mp[j] != 0)
            {
                mp[j]--;
                j++;
            }
        }
        cout << count << endl;
    }

    return 0;
}

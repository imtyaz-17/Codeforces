#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n;

        vector<int> a(n);
        for (i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n);
        for (i = 0; i < n; i++)
            cin >> b[i];
        cin >> m;

        multiset<int> razor;

        for (i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            razor.insert(x);
        }
        set<int> cut;
        bool check = true;

        for (i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                check = false;
                break;
            }
            while (!cut.empty() && *cut.begin() < b[i])
            {
                cut.erase(cut.begin());
            }
            if (b[i] != a[i] && !cut.count(b[i]))
            {
                auto ii = razor.find(b[i]);
                if (ii == razor.end())
                {
                    check = false;
                    break;
                }
                razor.erase(ii);
                cut.insert(b[i]);
            }
        }

        if (check)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int dice, s, r;
        cin >> dice >> s >> r;
        int a = s - r;

        vector<int> ans(dice - 1);
        ans.push_back(a);
        for (int i = 0; i < dice - 1; i++)
        {
            ans[i] = 1;
            r = r - 1;
        }
        int i = 0;
        while (r != 0)
        {
            if (ans[i] < a)
            {
                ans[i]++;
                r--;
            }
            else
                i++;
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {

            cout << ans[i] << ' ';
        }
        cout << endl;
    
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
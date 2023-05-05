#include <bits/stdc++.h>
using namespace std;

void solution()
{

    int number, m, d;
    cin >> number >> m >> d;

    vector<int> arrN(number);
    vector<int> arrM(m);

    for (int i = 0; i < number; i++)
    {
        cin >> arrN[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arrM[i];
    }
    unordered_map<long long, long long> mpp;
    for (int i = 0; i < number; i++)
    {
        mpp[arrN[i]] = i + 1;
    }

    long long ans = INT_MAX;
    bool flag = false;

    for (int i = 0; i < m - 1; i++)
    {
        if (mpp[arrM[i]] >= mpp[arrM[i + 1]])
        {
            flag = true;
            break;
        }
        else if (mpp[arrM[i + 1]] > mpp[arrM[i]] + d)
        {
            flag = true;
            break;
        }
        ans = min(ans, mpp[arrM[i + 1]] - mpp[arrM[i]]);

        if (d + 1 - (mpp[arrM[i + 1]] - (arrM[i])) <= (number - arrM[i + 1] + mpp[arrM[i]] - 1))
        {
            ans = min(ans, d + 1 - (mpp[arrM[i + 1]] - mpp[arrM[i]]));
        }
    }
    if (!flag)
    {
        cout << ans << endl;
    }
    else
        cout << 0 << endl;
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
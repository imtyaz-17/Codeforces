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
        string s;
        cin >> s;

        unordered_map<char, int> mpp1, mpp2;
        vector<int> vec1(n, 0), vec2(n, 0);

        mpp1[s[0]]++;
        vec1[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (mpp1.find(s[i]) != mpp1.end())
            {
                vec1[i] = vec1[i - 1];
            }
            else
            {
                vec1[i] = 1 + vec1[i - 1];
            }
            mpp1[s[i]]++;
        }

        vec2[n - 1] = 1;
        mpp2[s[n - 1]]++;
        for (int i = n - 2; i >= 0; i--)
        {
            if (mpp2.find(s[i]) != mpp2.end())
            {
                vec2[i] = vec2[i + 1];
            }
            else
            {
                vec2[i] = 1 + vec2[i + 1];
            }
            mpp2[s[i]]++;
        }
        int result = 0, sum;
        for (int i = 0; i < n; i++)
        {
            sum = vec1[i] + vec2[i];
            result = max(result, sum);
        }

        cout << ((result > n) ? n : result) << endl;
    }
    return 0;
}

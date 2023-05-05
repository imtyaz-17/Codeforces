#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int numb, k;
        cin >> numb >> k;

        vector<int> arr(numb);
        for (int i = 0; i < numb; i++)
        {
            cin >> arr[i];
        }
        vector<int> v;
        int i = 0;
        for (i = 0; i < numb; i++)
        {
            if (arr[i] == 1)
            {
                v.push_back(1);
                break;
            }
        }
        int j = 0;
        for (; i < numb; i++)
        {
            if (v[j] + 1 == arr[i])
            {
                v.push_back(arr[i]);
                j++;
            }
        }
        int s = numb - v.size();
        if (s % k == 0)
            cout << s / k << endl;
        else
            cout << s / k + 1 << endl;
    }
    return 0;
}
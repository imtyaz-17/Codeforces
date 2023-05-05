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
        int arr[n];
        int xx[n + 1];
        int yy[n + 1];
        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            xx[i + 1] = -1;
            yy[i + 1] = -1;
        }

        int permu1[n], permu2[n];
        for (int i = 0; i < n; i++)
        {
            permu1[i] = 0;
            permu2[i] = 0;
        }
        set<int> st1, st2;

        for (int i = 0; i < n; i++)
        {
            if (xx[arr[i]] == -1)
            {
                xx[arr[i]] = i;
                permu1[i] = arr[i];
            }
            else if (yy[arr[i]] == -1)
            {
                yy[arr[i]] = i;
                permu2[i] = arr[i];
            }
            else
                flag = 1;
        }

        if (flag == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (xx[i + 1] == -1)
            {
                st1.insert(i + 1);
            }
            if (yy[i + 1] == -1)
            {
                st2.insert(i + 1);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (permu1[i] == 0)
            {
                auto it = st1.upper_bound(permu2[i]);

                if (it == st1.begin())
                {
                    flag = 1;
                    break;
                }
                else
                {
                    it--;
                    permu1[i] = *it;
                    st1.erase(it);
                }
            }
            else
            {
                auto it = st2.upper_bound(permu1[i]);

                if (it == st2.begin())
                {
                    flag = 1;
                    break;
                }
                else
                {
                    it--;
                    permu2[i] = *it;
                    st2.erase(it);
                }
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << permu1[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < n; i++)
        {
            cout << permu2[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

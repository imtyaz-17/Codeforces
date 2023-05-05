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

        int arr[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> arr[i][j];
            }
        }

        int a = -1, b = -1;

        for (int i = 0; i < n; i++)
        {
            int fl = 0;

            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    continue;
                if (arr[i][1] == arr[j][0])
                {
                    a = i;
                    b = j;
                    fl = 1;
                    break;
                }
            }

            if (fl == 1)
                break;
        }

        cout << arr[a][0] << " ";
        for (int i = 0; i < n - 1; i++)
        {
            cout << arr[b][i] << " ";
        }
        cout << endl;
    }

    return 0;
}

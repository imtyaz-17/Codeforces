#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    int b = n * (k - 1);

    long total = n * (b + 1) + (n - k + 1) * n * (n - 1) / 2;
    cout << total << endl;

    for (int row = 0; row < n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col < k)
            {
                cout << (row * (k - 1) + col) << " ";
            }
            else
            {
                cout << (b + row * (n - k + 1) + (col - k + 1)) << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
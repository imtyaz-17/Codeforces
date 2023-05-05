#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> perm(n, 0);
    for (int row = 0; row < n; row++)
    {
        int current(0);
        for (int col = 0; col < n; col++)
        {
            int x;
            cin >> x;
            current = max(current, x);
        }
        perm[row] = current;
    }

    for (int p = 0; p < n; p++)
    {
        if (perm[p] == n - 1)
        {
            perm[p] = n;
            break;
        }
    }
    for (int p = 0; p < n; p++)
    {
        cout << perm[p] << " ";
    };
    cout << endl;

    return 0;
}
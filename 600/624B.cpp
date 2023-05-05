#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    vector<int> count(n, 0);
    for (int p = 0; p < n; p++)
    {
        cin >> count[p];
    }

    sort(count.begin(), count.end());

    int total(0);
    int prev = count[n - 1] + 1;
    for (int p = n - 1; p >= 0; p--)
    {
        if (prev <= count[p])
        {
            --prev;
        }
        else
        {
            prev = count[p];
        }
        total += (prev > 0) * prev;
    }

    cout << total << endl;

    return 0;
}
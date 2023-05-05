#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> arrayy(n);
    for (int i = 0; i < n; i++)
        cin >> arrayy[i];
    sort(arrayy.begin(), arrayy.end());

    if (arrayy[0] == arrayy[n - 1])
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    for (int i = 0; i < n / 2; i++)
    {
        cout << arrayy[n - i - 1] << " " << arrayy[i] << " ";
    }
    if (n % 2)
        cout << arrayy[n / 2];
    cout << endl;
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
#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, k;
    cin >> n >> k;
    vector<long> speed(n, 0);
    for (int p = 0; p < n; p++)
    {
        cin >> speed[p];
    }
    sort(speed.begin(), speed.end());
    cout << speed[n - k] << endl;

    return 0;
}
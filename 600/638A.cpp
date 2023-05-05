#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n, a;
    cin >> n >> a;
    long ans = 1 + ((a % 2) ? ((a - 1) / 2) : ((n - a) / 2));
    cout << ans << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solution()
{
    ll x, y;
    cin >> x >> y;
    ll length = ((x - y) + (x - 1 - y) + 1);
    cout << length << endl;

    ll i = y + 1;
    while (i <= x)
    {
        cout << i << " ";
        i++;
    }
    ll j = x - 1;
    while (j >= y)
    {
        cout << j << " ";
        j--;
    }
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
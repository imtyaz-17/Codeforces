#include <bits/stdc++.h>
using namespace std;
#define modl 1000000007

void solution()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a == 0)
    {
        cout << 1 << endl;
        return;
    }
    int jokes_told = a;
    jokes_told += 2 * min(b, c);

    int remaining_jokes = abs(b - c) + d;
    if (remaining_jokes >= a + 1)
    {
        jokes_told += a + 1;
    }
    else
    {
        jokes_told += remaining_jokes;
    }

    cout << jokes_told << endl;
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
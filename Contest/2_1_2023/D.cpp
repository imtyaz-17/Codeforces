#include <bits/stdc++.h>
using namespace std;
#define modd 998244353

long long inverse[1000010];
void helper()
{
    inverse[0] = inverse[1] = 1;
    for (long long i = 2; i <= 1000000; ++i)
        inverse[i] = modd - modd / i * inverse[modd % i] % modd;
}
int main()
{
    helper();
    long long n, checkk, x_indx, y_indx;
    int T;
    cin >> T;
    while (T--)
    {
        string a, b;
        cin >> n >> a >> b;
        checkk = 0;
        x_indx = y_indx = 1;
        for (long long i = 0; i < n; i++)
            checkk += a[i] != b[i];
            
        for (long long i = n; i >= 2; i--)
        {
            x_indx = ((n * inverse[i] % modd + (n * inverse[i] % modd - 1) * x_indx % modd) % modd + modd) % modd;
            y_indx = (y_indx + (i <= checkk) * x_indx) % modd;
        }
        if (checkk != 0)
            cout << ((x_indx * n + n + y_indx - x_indx) % modd + modd) % modd - 1 << endl;
        else
            cout << 0 << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long int modexp(long long int a, long long int b)
{
    long long int ans = 1;
    while (b > 0)
    {
        if ((b % 2) == 1)
        {
            ans = (ans * a) % mod;
        }
        a = (a * a) % mod;
        b /= 2;
    }

    return ans;
}
long long int sum_square(long long int n)
{
    long long int ans = (((n * (n + 1)) % mod) * (2 * n + 1) % mod) % mod;
    ans = (ans * modexp(6, mod - 2)) % mod;

    return ans;
}

long long int linear_sum(long long int n)
{
    long long int ans = (n * (n + 1)) % mod;
    ans = (ans * modexp(2, mod - 2)) % mod;

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long int n, i, res=0;
        cin >> n;

        res = (res + sum_square(n)) % mod;
        res = (res + sum_square(n - 1)) % mod;
        res = (res + linear_sum(n - 1)) % mod;
        res = (res * 2022) % mod;

        cout << res << endl;
    }

    return 0;
}
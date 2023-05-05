#include <bits/stdc++.h>
using namespace std;
int main()
{

    long long n, m;
    scanf("%lld %lld", &n, &m);
    vector<bool> binary(n);
    vector<int> perm(n);
    int l(0), r(n - 1);
    --m;
    for (int p = n - 2; p >= 0; p--)
    {
        binary[p] = m % 2;
        m /= 2;
    }
    for (int p = 0; p < n; p++)
    {
        if (binary[p])
        {
            perm[r--] = p + 1;
        }
        else
        {
            perm[l++] = p + 1;
        }
    }
    for (int p = 0; p < n; p++)
    {
        printf("%d ", perm[p]);
    }
    puts("");

    return 0;
}
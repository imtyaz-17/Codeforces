#include <bits/stdc++.h>
using namespace std;

void solution()
{
    long long number, i;
    cin >> number;

    long long arr[number];
    for (i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    long long prefix[number], suffix[number];
    long long ans = 1;

    prefix[0] = arr[0];
    suffix[number - 1] = arr[number - 1];

    for (i = 1; i < number; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    for (i = number - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    for (i = 0; i < number - 1; i++)
    {

        ans = max(ans, __gcd(max(prefix[i], suffix[i + 1]), min(prefix[i], suffix[i + 1])));
    }
    cout << ans << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}
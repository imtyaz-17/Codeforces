#include <bits/stdc++.h>
using namespace std;
int main()
{

    const int N = 256;
    vector<long long> counts(N, 0);

    string input;
    getline(cin, input);
    for (long k = 0; k < input.size(); k++)
    {
        ++counts[input[k]];
    }

    long long total(0);
    for (long k = 0; k < N; k++)
    {
        total += counts[k] * counts[k];
    }

    printf("%lld\n", total);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

long long int powrr(long long int n)
{
    return (long long int)pow(2, n + 1) - 2;
}
int main()
{

    long long int n;
    cin >> n;

    cout << powrr(n) << endl;

    return 0;
}
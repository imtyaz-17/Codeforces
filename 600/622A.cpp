#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int a = (-1 + sqrt(1 + 8 * n)) / 2;
    n -= a * (a + 1) / 2;
    cout << ((n > 0) ? n : a) << endl;

    return 0;
}
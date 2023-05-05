#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k;
    cin >> n >> k;
    int a = (n / 2) / (k + 1);
    int b = k * a;
    int c = n - a - b;
    cout << a << " " << b << " " << c << endl;

    return 0;
}
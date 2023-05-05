#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;
    int win = (n / k) % 2;
    cout << (win ? "YES" : "NO") << endl;

    return 0;
}
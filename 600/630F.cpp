#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int total(0);
    total += (((n * (n - 1) / 2) * (n - 2) / 3) * (n - 3) / 4) * (n - 4) / 5;
    total += ((((n * (n - 1) / 2) * (n - 2) / 3) * (n - 3) / 4) * (n - 4) / 5) * (n - 5) / 6;
    total += (((((n * (n - 1) / 2) * (n - 2) / 3) * (n - 3) / 4) * (n - 4) / 5) * (n - 5) / 6) * (n - 6) / 7;
    cout << total << endl;

    return 0;
}
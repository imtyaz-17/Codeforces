#include <bits/stdc++.h>
using namespace std;
int main()
{

    long n;
    cin >> n;
    vector<bool> digits;
    while (n > 0)
    {
        digits.push_back(n % 2);
        n /= 2;
    }
    for (int p = digits.size() - 1; p >= 0; p--)
    {
        if (digits[p])
        {
            cout << (p + 1) << " ";
        }
    }
    cout << endl;

    return 0;
}
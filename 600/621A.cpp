#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int total(0), smallestOdd(0);
    while (n--)
    {
        int x;
        cin >> x;
        total += x;
        if ((x % 2) && (smallestOdd == 0 || x < smallestOdd))
        {
            smallestOdd = x;
        }
    }

    if (total % 2)
    {
        total -= smallestOdd;
    }
    cout << total << endl;

    return 0;
}
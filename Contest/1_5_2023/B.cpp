#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int numb, i;
        cin >> numb;

        if (numb % 2 == 0)
        {
            cout << "YES" << endl;
            for (i = 0; i < numb / 2; i++)
            {
                cout << "1 -1"
                     << " ";
            }
            cout << endl;
        }
        else if (numb == 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int xss = numb / 2;
            for (i = 0; i < numb / 2; i++)
            {
                cout << 1 - xss << " " << xss << " ";
            }
            cout << 1 - xss << endl;
        }
    }
    return 0;
}
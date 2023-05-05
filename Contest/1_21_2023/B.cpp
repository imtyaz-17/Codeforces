#include <bits/stdc++.h>
using namespace std;
#define modl 1000000007

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int numb, i;
        cin >> numb;

        if (numb == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            long long int result = numb * (numb - 1);
            for (i = 1; i <= numb; i++)
            {
                result = (result * i) % modl;
            }
            cout << result << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, d, rem, cnt = 0;
        cin >> n;

        if (n <= 10)
        {
           cout<<n<<endl;
        }
        else
        {
            string st = to_string(n);
            int el = st[0] - '0';
            cout << el + 9 * st.size() - 9 << endl;
        }
    }

    return 0;
}
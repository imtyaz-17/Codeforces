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
            cnt = n;
        }
        else
        {
            //     d=n/10;
            //     if(d>10){
            //         rem=d%10;
            //     if(d%10!=0){
            //         d=d-rem;
            //     }
            //     cnt = d+9 ;
            //     }
            //    else
            //     cnt = d+9 ;
            string st = to_string(n);
            int el = st[0] - '0';
            cout << el + 9 * st.size() - 9 << endl;
        }

        cout << cnt << endl;
    }

    return 0;
}
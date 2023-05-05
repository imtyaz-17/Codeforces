#include <bits/stdc++.h>
using namespace std;
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int result = n;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        if ((s[low] == '0' && s[high] == '1') || (s[low] == '1' && s[high] == '0'))
        {
            result -= 2;
            low++;
            high--;
        }
        else
        {
            cout << result << endl;
            return;
        }
    }
    cout << result << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}

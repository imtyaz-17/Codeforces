#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int number;
    cin >> number;
    vector<int> arr(number), odd, even;

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
        (arr[i] % 2 ? odd : even).push_back(i + 1);
    }

    if (odd.size() >= 3)
    {
        cout << "YES" << endl;
        cout << odd[0] << ' ' << odd[1] << ' ' << odd[2] << endl;
    }
    else if (even.size() >= 2 && odd.size() >= 1)
    {
        cout << "YES" << endl;
        cout << odd[0] << ' ' << even[0] << ' ' << even[1] << endl;
    }
    else
        cout << "NO" << endl;
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
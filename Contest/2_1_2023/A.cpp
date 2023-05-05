#include <bits/stdc++.h>
using namespace std;
void solution()
{

    int number;
    cin >> number;

    vector<int> arr(number);
    int sum = 0;

    bool imty = false;
    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < number - 1; i++)
    {
        if (arr[i] == -1 && arr[i + 1] == -1)
        {
            imty = true;
            break;
        }
    }

    if (imty)
    {
        cout << sum + 4 << endl;
    }
    else
    {
        if (sum == number)
        {
            cout << sum - 4 << endl;
        }
        else
        {
            cout << sum << endl;
        }
    }
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
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n), vec;
        int sum = 0, negCount = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += abs(arr[i]);
            if (arr[i] < 0)
            {
                negCount++;
            }
            vec.push_back(abs(arr[i]));
        }

        int minEl = *min_element(vec.begin(), vec.end());
        if (negCount % 2 == 0)
        {
            cout << sum << endl;
        }
        else
            cout << sum - 2 * minEl << endl;
    }

    return 0;
}

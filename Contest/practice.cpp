#include <bits/stdc++.h>
using namespace std;

int secondMax(vector<int> arr)
{
    int n = arr.size();

    int maxx = arr[0];
    int secondmx = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            secondmx = maxx;
            maxx = arr[i];
        }
        else if (arr[i] > secondmx && arr[i] < maxx)
        {
            secondmx = arr[i];
        }
    }
    return secondmx;
}
int main()
{
    vector<int> arr = {5, 0, -1, 0, 4, 4};
    // vector<int> arr = {-1, 3, 4, 0, 4, 4};

    cout << secondMax(arr) << endl;
    return 0;
}
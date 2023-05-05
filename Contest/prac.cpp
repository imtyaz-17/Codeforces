#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {3, 8, 2, 6, 10, 7};
    // vector<int> arr={2, 2, 2, 3, 3, 3};

    int maxx = arr[0];
    int sec_max = INT_MIN;
    int third_max = INT_MIN;
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            third_max = sec_max;
            sec_max = maxx;
            maxx = arr[i];
        }
        else if (arr[i] > sec_max && arr[i] != maxx)
        {
            third_max = sec_max;
            sec_max = arr[i];
        }
        // else if(arr[i] >third_max && arr[i] !=sec_max && arr[i] != maxx){
        //     third_max = arr[i];
        // }
    }

    cout << third_max << endl;
}
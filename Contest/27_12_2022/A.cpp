#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, i, j;
        cin >> n;

        long long int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        while(arr[n-1]*arr[n-2] != arr[n-1]){
            arr[n-1]=arr[n-1]*arr[n-2];
            arr[n-2]=1;

            sort(arr,arr+n);
        }
        long long int sum = 0;

        for (i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum*2022 << endl;
    }
    return 0;
}
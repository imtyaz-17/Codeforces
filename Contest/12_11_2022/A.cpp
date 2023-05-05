#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n, i, j, cnt = 0;
        cin>>n;
        map<int, int>mp;
        vector<int>arr;
        for(i = 0; i<n; i++)
        {
            cin>>j;
            mp[j]++;
            arr.push_back(j);
        }
        sort(arr.begin(), arr.end());
        
        if(mp[arr[0]] == n)
            cout<<n*(n-1)<<endl;
        else
            cout<<2 * mp[arr[0]] * mp[arr[n-1]]<<endl;
    }
}
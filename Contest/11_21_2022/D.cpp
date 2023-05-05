#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];

        for(int i = 0; i<n; i++)
            cin>>arr[i];
        int flag = 1;

        for(int i = 0; i<n-1; i++)
        {
            if(arr[i]<arr[i+1])
            {
                flag=0;
                while(arr[i+1]>= arr[i] && i<n-1)
                    i++;
                if(i == n-1)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
                break;
            }
        }

        if(flag)
            cout<<"YES"<<endl;




    }
}
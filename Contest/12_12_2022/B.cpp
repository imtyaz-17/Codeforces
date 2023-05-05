#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,j;

        string s;
        cin>>n;
        cin>>s;
        map<pair<char, char>, int>mp;
        pair<char, char> prevs = {s[0], s[1]};
        mp[prevs]++;
        int f = 1;
        for(int i = 2; i<n; i++)
        {
            pair<char, char>ab = { s[i-1], s[i]};
            if(mp[ab]!=0)
            {

                if(ab == prevs &&mp[ab]>1 || ab !=prevs)
                    {
                        cout<<"YES"<<endl;
                        f = 0;
                        break;
                    }
            }
            prevs = ab;
            mp[ab]++;
        }
        if(f)
        cout<<"NO"<<endl;
    }
}
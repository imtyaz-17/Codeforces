#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

void solve(){
    ll n; cin>>n;
    vector<ll>v(n),pre(n,0);
    ll sm=0;
    ll totNeg=0;
    for(ll i=0; i<n; i++){
        cin>>v[i];
        sm+=abs(v[i]);
        if(v[i]<0) totNeg++;
    }
    for(ll i=0; i<n; i++) if(v[i]<0) v[i]=abs(v[i]);
    if(totNeg%2==0){
        cout<<sm<<endl;
        return;
    }
    ll mn= *min_element(v.begin(),v.end());
    cout<<sm-2*mn<<endl;
}

int main(){
    ll t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main(){

   
    long n; cin >> n;
    string s; cin >> s;

    vector<long> v(n, 1);
    v[0] = 1;
    for(long p = 1; p < n; p++){
        if(s[p - 1] == 'L'){v[p] = 1;}
        else{v[p] = v[p - 1] + (s[p - 1] == 'R');}
    }

    for(long p = n - 2; p >= 0; p--){
        if(s[p] == 'L'){v[p] = (v[p] > v[p + 1] + 1) ? v[p] : (v[p + 1] + 1);}
        else if(s[p] == '='){v[p] = (v[p] > v[p + 1]) ? v[p] : v[p + 1];}
    }

    for(long p = 0; p < n; p++){cout << v[p] << " ";}
    cout << endl;

    return 0;
}
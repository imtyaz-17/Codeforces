#include <bits/stdc++.h>
using namespace std;
bool check(vector<double> a, double loss, double avg){

    double rem(0);
    for(long p = 0; p < a.size(); p++){rem += (a[p] - avg) * (1 - loss * (a[p] > avg));}
    return (rem >= 0);
}


int main(){

    const double EPS = 1e-8;
    long n, k; scanf("%ld %ld", &n, &k);
    vector<double> a(n, 0);

    double left(0), right(0);

    for(long p = 0; p < n; p++){
        scanf("%lf", &a[p]);
        right = (right > a[p]) ? right : a[p];
    }


    double res(0.0);
    while(right - left > EPS){
        double mid = (left + right) / 2;
        if(check(a, k / 100.0, mid)){res = mid; left = mid;}
        else{right = mid;}
    }

    printf("%lf\n", res);

    return 0;
}
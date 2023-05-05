#include <bits/stdc++.h>

using namespace std;

int t, n, m;
long long a[105], b[105];

int main() {
cin >> t;
while (t--) {
cin >> n >> m;
for (int i = 0; i < n; i++) {
cin >> a[i];
}
for (int i = 0; i < m; i++) {
cin >> b[i];
}
sort(a, a + n, greater<long long>());
sort(b, b + m);
long long ans = 0;
for (int i = 0; i < n; i++) {
ans += max(a[i], b[i]);
}
cout << ans << endl;
}
return 0;
}
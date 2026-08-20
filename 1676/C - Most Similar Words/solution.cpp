#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
 
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;
 
using ll = long long;
using lli = long long int;
using ld = long double;
const char el = '
';
const char sp = ' ';
 
inline void solve();
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int TC = 1;
    cin >> TC;
    for (int i = 0; i < TC; i++) {
        // cout<<"case "<<(i+1)<<": ";
        solve();
        cout << el;
    }
    return 0;
}
void solve() {
	int p, q;
    cin >> p >> q;
    vector<string> w(p);
    for (int i = 0; i < p; ++i) {
        cin >> w[i];
    }
    int ans = 1e9;
    for (int a = 0; a < p; ++a) {
        for (int b = a + 1; b < p; ++b) {
            int d = 0;
            for (int c = 0; c < q; ++c) {
                d += abs(w[a][c] - w[b][c]);
            }
            if (d < ans) {
                ans = d;
            }
        }
    }
    cout << ans;
}
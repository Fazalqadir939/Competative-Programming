#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    long long s = 0;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }
    
    long long avg = s / n;
    long long extra = 0;
    
    for (int i = 0; i < n; ++i) {
        extra += (a[i] - avg);
        if (extra < 0) {
            cout << "NO
";
            return;
        }
    }
    
    cout << "YES
";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
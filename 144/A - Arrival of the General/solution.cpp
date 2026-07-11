#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
 
    vector<int> a(n);
    int mx = 0;
    int mn = 101;
    int p1 = 0;
    int p2 = 0;
 
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > mx) {
            mx = a[i];
            p1 = i;
        }
        if (a[i] <= mn) {
            mn = a[i];
            p2 = i;
        }
    }
 
    int res = p1 + (n - 1 - p2);
    if (p1 > p2) {
        res--;
    }
 
    cout << res << "
";
 
    return 0;
}
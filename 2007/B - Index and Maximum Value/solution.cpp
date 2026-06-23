// =======================================================================================
//
//                         بِسْمِ ٱللّٰهِ ٱلرَّحْمٰنِ ٱلرَّحِيمِ
// "وَلَقَدْ خَلَقْنَا الْإِنْسَانَ وَنَعْلَمُ مَا تُوَسْوِسُ بِهِ نَفْسُهُ ۖ وَنَحْنُ أَقْرَبُ إِلَيْهِ مِنْ حَبْلِ الْوَرِيدِ" (Quran 50:16)
//
//      June,2K26                                          Fazal Qadir
//      codeforces Current Rating: 1237  --> Pupil   -->   @fazalqadir
// =======================================================================================
// Created by Fazal Qadir on 6/22/2026.
 
#include<bits/stdc++.h>
using namespace std;
// --- Shortened ---
 
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;
 
// --- Macros ---
 
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define pb push_back
#define fi first
#define se second
 
// --- Local Debugger ---
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl;
#else
#define debug(x)
#endif
 
// --- User Defined function Part ---
 
void solve();
 
 
// --- main function ---
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
// ---  Don't change above ---
    int test=1;
    cin >> test;
    while(test--){
    solve();
    }
}
 
// ---  Actual code itthe rakh ---
 
void solve(){
    int n, m;
    cin >> n >> m;
    vi a(n);
    int mx = INT_MIN;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > mx) {
            mx = a[i];
        }
    }
 
    for(int i = 0; i < m; i++) {
        char ch;
        int l, r;
        cin >> ch >> l >> r;
 
        if (mx >= l && mx <= r) {
            if (ch == '+') {
                mx += 1;
            } else {
                mx -= 1;
            }
        }
        cout << mx << (i == m - 1 ? "" : " ");
    }
    cout << '
';
}